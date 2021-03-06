using UnityEngine;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System;
using System.ComponentModel;
#if UNITY_ANDROID
using MediabrixPlatformPlugin = MediabrixPluginAndroid;
#elif UNITY_IPHONE
using MediabrixPlatformPlugin = MediabrixPluginIOS;
#endif

public interface MediaBrixAdEvents {
    void OnStarted(string statusText);
    void OnAdRewardConfirmation(string zone);
    void OnAdUnavailable(string zone);
    void OnAdClosed(string zone);
    void OnAdReady(string zone);
	void OnAdShown (string zone);
	void OnAdClicked (string zone);
}

public class MediabrixPlugin : MonoBehaviour {
		
    public static void Initialize(string url, string appId, MediaBrixAdEvents callbacks) {
        MediabrixPlatformPlugin.Initialize(url, appId, callbacks);
    }

	public static void Load(string target) {
		MediabrixPlatformPlugin.Load(target);
	}

	public static void Show(string target) {
		MediabrixPlatformPlugin.Show(target);
	}
	
	public static void Pause() {
		MediabrixPlatformPlugin.Pause();
	}
	
	public static void Resume() {
		MediabrixPlatformPlugin.Resume();
	}
	
	public static void Destroy() {
		MediabrixPlatformPlugin.Destroy();
	}

	public static void SetVerbose(bool debug){
		MediabrixPlatformPlugin.SetVerbose (debug);
	}
}


