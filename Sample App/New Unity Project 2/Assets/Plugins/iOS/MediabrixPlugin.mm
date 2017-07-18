//
//  MediabrixPlugin.m
//  MediabrixPlugin
//
//  Created by Amos Elmaliah on 1/8/13.
//  Copyright (c) 2013 MediaBrix inc. All rights reserved.
//

#import "MediabrixPlugin.h"
#import <objc/message.h>

static const char* serviceReadyCallbackName     = "OnStarted";
static const char* didLoadCallbackName          = "OnAdReady";
static const char* didFailLoadCallbackName      = "OnAdUnavailable";
static const char* willShowAdCallbackName       = "OnAdShown";
static const char* adDidCloseCallbackName       = "OnAdClosed";
static const char* rewardDidChangeCallbackName  = "OnAdRewardConfirmation";
static const char* clickedCallbackName          = "OnAdClicked";
static NSString* __callback = nil;
static MediabrixPlugin *plugin;

extern void UnitySendMessage(const char* obj, const char* method, const char* msg);

static void unity_callback(const char* method, const char* msg) {
    
    if (__callback) {
        UnitySendMessage([__callback UTF8String],method, msg);
    }
}

static NSString* mb_objcstring(const char* string) {
    
    return [NSString stringWithUTF8String:string ? : ""];
}

static BOOL isVerbose(const char* string){
    NSString* flag = mb_objcstring(string);
    if([flag isEqualToString:@"true"]){
        return YES;
    }else{
        return NO;
    }
}

static NSDictionary* mb_ComponentSeparatedKeyValueFromStringWithSeparator(const char* string, const char* separator) {
    
    NSMutableDictionary* result = nil;
    if (string && separator) {
        NSArray* array = [mb_objcstring(string) componentsSeparatedByString:mb_objcstring(separator)];
        if (array && array.count % 2 == 1) {
            int max = floorf((array.count / 2) * 2);
            for (int i = 0; i < max; i +=2) {
                if (!result) {
                    result = [[NSMutableDictionary alloc] init] ;
                }
                result[array[i]] = array[i+1];
            }
        }
    }
    return [result copy];
}


// When native code plugin is implemented in .mm / .cpp file, then functions
// should be surrounded with extern "C" block to conform C function naming rules
#ifdef __cplusplus
extern "C" {
    void mb_initialize_unity (const char* base_url, const char* app_id, const char* callbackHandlerName) {
        plugin = [[MediabrixPlugin alloc] init];
        [MediaBrix initMediaBrixDelegate:plugin withBaseURL:mb_objcstring(base_url) withAppID:mb_objcstring(app_id)];
        
        NSString*objcString = mb_objcstring(callbackHandlerName);
        
        if (![__callback isEqualToString:objcString]) {
            
            __callback = [objcString copy];
        }
    }
    
    void mb_load_ad_with_identifier(const char* identifer, const char* key_value_pairs_null_terminated) {
        
        [[MediaBrix sharedInstance] loadAdWithIdentifier:mb_objcstring(identifer) withViewController:nil];
    }
    
    void mb_show_ad_with_identifier(const char* identifer, void * context) {
        [[MediaBrix sharedInstance] showAdWithIdentifier:mb_objcstring(identifer) fromViewController:[UIApplication sharedApplication].keyWindow.rootViewController reloadWhenFinish:NO];
        
    }
    
    void mb_set_verbose(const char* flag){
        [MediaBrix MBEnableVerboseLogging:isVerbose(flag)];
    }
}


@implementation MediabrixPlugin

#pragma mark - <MediaBrixDelegate>
- (void)mediaBrixStarted {
    unity_callback(serviceReadyCallbackName, "start");
}

- (void)mediaBrixAdWillLoad:(NSString *)identifier {
    // Invoked when the ad has been requested
}

- (void)mediaBrixAdFailed:(NSString *)identifier {
    unity_callback(didFailLoadCallbackName, [identifier UTF8String]);
    // Invoked when the ad fails to load an ad
}

- (void)mediaBrixAdReady:(NSString *)identifier {
    unity_callback(didLoadCallbackName, [identifier UTF8String]);
    // Invoked when ad has succesfully downloaded and is ready to show
}

- (void)mediaBrixAdShow:(NSString *)identifier {
    unity_callback(willShowAdCallbackName, [identifier UTF8String]);
    // Invoked when ad is being shown to the user
}

- (void)mediaBrixAdDidClose:(NSString *)identifier {
    unity_callback(adDidCloseCallbackName, [identifier UTF8String]);
    // Invoked when the ad is closed
}

- (void)mediaBrixAdReward:(NSString *)identifier {
    unity_callback(rewardDidChangeCallbackName, [identifier UTF8String]);
    // Invoked when the user has watched an ad that offers an incentive and reward should be given
}

- (void)mediaBrixAdClicked:(NSString *)identifier {
    unity_callback(clickedCallbackName, [identifier UTF8String]);
    // Invoked when the user has clicked the ad
}

@end

#endif
