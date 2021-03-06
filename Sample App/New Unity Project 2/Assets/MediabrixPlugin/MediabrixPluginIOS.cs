#if UNITY_IPHONE
using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using System.Collections.Generic;

public class MediabrixPluginIOS : MonoBehaviour
{
	#region	Interface to native implementation
	
	[DllImport ("__Internal")]
	private static extern void mb_initialize_unity(string flagKey, string flagValue, string callbackHandlerName);
		
	[DllImport("__Internal")]
	private static extern void mb_load_ad_with_identifier(string identifier, string key_value_pairs_null_terminated);
	
	[DllImport ("__Internal")]
	private static extern void mb_show_ad_with_identifier(string identifier);

	[DllImport ("__Internal")]
	private static extern void mb_set_verbose(string flag);


	#endregion
	
	#region Declarations for non-native
	
	private static string componentSeparatedStringFromDictionaryWithSeparator(Dictionary<string,string> dictionary, string separator) {
		string result = "";
		foreach (KeyValuePair<string,string> kv in dictionary) {
			result += kv.Key + separator + kv.Value + separator;
		}
		return result;
	}
	
	public static void Initialize(string url, string appId, MediaBrixAdEvents callbacks) {
		mb_initialize_unity(url, appId, callbacks.GetType().FullName);
	}
	
	public static void Load(string target) {
		mb_load_ad_with_identifier(target, null);
	}

	public static void Show(string target) {
		mb_show_ad_with_identifier(target);
	}
	
	public static void Pause() {
	}
	
	public static void Resume() {
	}
	
	public static void Destroy() {
	}

	public static void SetVerbose(bool verbose){
		if(verbose)
			mb_set_verbose("true");
		else
			mb_set_verbose("false");
	}

    #endregion
}
#endif
