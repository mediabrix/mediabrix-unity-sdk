using UnityEngine;
using System.Collections;

public class Main : MonoBehaviour, MediaBrixAdEvents {
	
	public static string serverURL = "http://mobile.mediabrix.com/v2/manifest/";
		public static string appID = "JxxEkB3BpF";
	
	string ViewButton = "Please Wait";
	string FlexButton = "Please Wait";
	string RewardButton = "Please Wait";
	
		const string ViewsIdentifier = "Rally_Standard_Video";
		const string FlexIdentifier = "Rally_Full_Image";
		const string RewardsIdentifier = "Rally_Static_Image";

	bool started = false;
	bool viewFail = true;
	bool flexLoad, flexFail = true;
	bool rewardLoad, rewardFail = true;
	
	// Use this for initialization
	void Start () {
		print ("MediabrixPlugin init");
		MediabrixPlugin.SetVerbose (true);////This method is used enable/disables SDK logs. To turn off SDK logs SetVerbose to false. By default setDebug is set to true
		MediabrixPlugin.Initialize (serverURL, appID, this);
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void OnGUI(){

		GUILayout.BeginHorizontal("box");
		if (GUILayout.Button (ViewButton, GUILayout.Width (300), GUILayout.Height (300))) {
			if(!viewFail){
				print("MediabrixPlugin Show");
				MediabrixPlugin.Show(ViewsIdentifier);
			}else{
				if(started){
					print("MediabrixPlugin load");
					MediabrixPlugin.Load(ViewsIdentifier);
				}else{
					print("MediabrixPlugin failed");
				}
			}
		}
		if (GUILayout.Button (FlexButton, GUILayout.Width (300), GUILayout.Height (300))) {
			if(!flexFail){
				print("MediabrixPlugin Show");
				MediabrixPlugin.Show(FlexIdentifier);
			}else{
				if(started){
					print("MediabrixPlugin load");
					MediabrixPlugin.Load(FlexIdentifier);
				}else{
					print("MediabrixPlugin failed");
				}
			}
		}
		if (GUILayout.Button (RewardButton, GUILayout.Width (300), GUILayout.Height (300))) {
			if(!rewardFail){
				print("MediabrixPlugin Show");
				MediabrixPlugin.Show(RewardsIdentifier);
			}else{
				if(started){
					print("MediabrixPlugin load");
					MediabrixPlugin.Load(RewardsIdentifier);
				}else{
					print("MediabrixPlugin failed");
				}
			}
		}
		GUILayout.EndHorizontal();


	}

	private void OnApplicationPause(bool pauseStatus) {
		if (pauseStatus) {
			print ("MediabrixPlugin pause");
			MediabrixPlugin.Pause();
		} else {
			print ("MediabrixPlugin resume");
			MediabrixPlugin.Resume();
		}
		
	}

	public void OnStarted(string status){
		started = true;
		ViewButton = "Babel_Rally";
		FlexButton = "Babel_Rescue";
		RewardButton = "Babel_Reward";
		print ("MediabrixPlugin started");
	}
	
	
	public void OnAdUnavailable(string target){
		print ("MediabrixPlugin "+ target + " Failed");
		if (target.Equals (ViewsIdentifier)) {
			ViewButton = ViewButton + " Failed";
			viewFail = true;
		} else if (target.Equals (FlexIdentifier)) {
			FlexButton = FlexButton + " Failed";
			flexFail = true;
		} else if (target.Equals (RewardsIdentifier)) {
			RewardButton = RewardButton + " Failed";
			rewardFail = true;
		}
	}
	
	//  This indicates the ad completed prefetching and can be displayed using the Show method.
	// The string message will indicate the target product identifier.
	public void OnAdReady(string target){
		print ("MediabrixPlugin "+target + " Ready");
		if (target.Equals (ViewsIdentifier)) {
			ViewButton = ViewButton + " Ready";
			viewFail = false;
		} else if (target.Equals (FlexIdentifier)) {
			FlexButton = FlexButton + " Ready";
			flexFail = false;
		} else if (target.Equals (RewardsIdentifier)) {
			RewardButton = RewardButton + " Ready";
			rewardFail = false;
		}
		
	}
	
	// When an ad closes this callback will be invoked.  The string parameter indicates the target of the ad unit. 
	public void OnAdClosed(string target){
		if (target.Equals (ViewsIdentifier)) {
			ViewButton = "Babel_Rally";
			viewFail = true;
		} else if (target.Equals (FlexIdentifier)) {
			FlexButton = "Babel_Rescue";
			flexFail = true;
		} else if (target.Equals (RewardsIdentifier)) {
			RewardButton = "Babel_Reward";
			rewardFail = true;
		}
	}
	
	// When a Rescue ad or a rewards ad is viewed long enough for a reward to be granted
	// the following callback will be invoked.  The target argument is the identifier for ad that granted the reward.
	public void OnAdRewardConfirmation(string target){
		
	}
	
	public void OnAdShown(string target){
		print ("ADSHOWN");
	}

	public void OnAdClicked(string target){
		print ("Ad Cliked");
	}
}
