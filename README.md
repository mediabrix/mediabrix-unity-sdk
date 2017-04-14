# MediaBrix Unity SDK
## Please see "Testing / Release Settings" section for new guidelines on testing and deploying your integration.

## Getting Started
Download the latest version of the MediaBrix Unity SDK: 
* MediaBrix_UnityPackage.unitypackage

## Project Set Up
### Import Unity Package
To import the MediaBrix SDK, please follow the instructions below to import the unity package:

1. Click "Assets" > "Import Package" > "Custom Package" in the menu bar

2. Find where you saved MediaBrix_UnityPackage.unitypackage and press "Open"

3. A dialog will appear. Ensure that all items are checked, and press "Import"

4. Ensure that "MediaBrixPlugin" and "Plugins" folders were successfully imported into the "Assets" folder

## Integrating the MediaBrix SDK
### Create a Game Object
You will need to create a game object for the script that will implement the SDK. The game object should share the name as the script. Add the script that implements the SDK, and MediaBrixPlugin.cs to that game object.

### MediaBrixAdEvents
The script that will display ads, will need to implement `MediaBrixAdEvents` interface. The methods that the class will implement provides the script with information regarding the SDK's ad state.

### Initialization
To initialize the MediaBrix SDK you will need to create an instance of the `MediabrixPlugin` object in your script's `Start()` method:
```
MediabrixPlugin.Initialize(string serverURL, string appID, this); 
//this refers to the class that implementing MediaBrixAdEvents
```
For all integrations, `serverURL` and `appID` values will be provided to you by MediaBrix during your onboarding process.

### Testing / Release Settings

To facilitate integrations and QA around the globe, MediaBrix has deployed an open Server URL for all of our world wide network partners to use while testing the MediaBrix SDK. This Test Sever URL will eliminate the need for proxying your device to the US and ensure your app receives 100% fill during testing.

* **Test Sever URL:** `https://test-mobile.mediabrix.com/v2/manifest/`

* **Production Sever URL:** `https://mobile.mediabrix.com/v2/manifest/`

`https://test-mobile.mediabrix.com/v2/manifest/` should **ONLY** be used for testing purposes, as it will not deliver live campaigns to your app.

It is important to ensure that after testing, the Release build of your app uses the Production Server URL. **If you release your app using the Test Server URL, your app will not receive payable MediaBrix ads.**

### MediaBrixAdEvents Callback Methods
```
public void OnStarted(string status){
// MediaBrix SDK has been initialized successfully, and can now attempt to load ads
}
  
// The target refers to zone that you are attempting to load/show

public void OnAdReady(string target){
// The SDK has successfully downloaded an ad, and is ready to show
}

public void OnAdUnavailable(String target){
// The SDK was not able to download an ad, so therefore you can't show an ad
}

public void OnAdShown(string target){
// The user is currently viewing the ad
}

public void OnAdRewardConfirmation(string target){
// The user has watched an ad that offers an incentive
// The user should be granted some award
}

public void OnAdClicked(string target){
// The user has clicked the ad
}
public void OnAdClosed(string target){
// The ad that was being displayed to the user has been closed
}
```

### Load an Ad
After receiving the `OnStarted()` callback, the SDK is now ready to load ads. To load an ad call the method below:
```
MediabrixPlugin.Load(string zone, Dictionary<string,string> mbrixVars);
// Zone will be provided by Mediabrix
// mbrixVars represent Publisher Vars, mbrixVars can be null
```

### Show an Ad
After receiving the `OnAdReady()` callback, the SDK is ready to show the ad that you have loaded. To show an ad call the method below:
```
MediabrixPlugin.Show(string zone)
// Zone represents the zone that has successfully been loaded
```

### Verbose Logging
The MediaBrix SDK prints out logs to reflect what state it is in. To turn off logs printed out by the SDK use the following command:
```
MediabrixPlugin.SetVerbose(false); //By setting setDebug to false, the SDK will not output any logs. 
```

### Unity for Android
Please go to [Unity for Android](https://github.com/mediabrix/mediabrix-unity-sdk/wiki/Android-for-Unity) to finish implementing the SDK.

### Unity for iOS
Please go to [Unity for iOS](https://github.com/mediabrix/mediabrix-unity-sdk/wiki/iOS-for-Unity) finish implementing the SDK.
