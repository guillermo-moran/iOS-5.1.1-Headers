/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSMutableDictionary, SBProcess, NSOperationQueue, CPDistributedNotificationCenter, NSLock, NSDictionary;

@interface SBApplicationController : XXUnknownSuperclass {
	NSDictionary* _pendingApplicationDictionaries;
	NSMutableDictionary* _applications;
	NSMutableDictionary* _applicationsByBundleIdentifer;
	NSMutableSet* _applicationsPlayingMutedAudioSinceLastLock;
	SBProcess* _processCurrentlyRecordingAudio;
	int _locationStatusBarIconType;
	NSDictionary* _backgroundDisplayDict;
	unsigned _ignoreUninstallationEventCount;
	CPDistributedNotificationCenter* _appStateNotificationCenter;
	NSOperationQueue* _backgroundOperationQueue;
	NSLock* _applicationsLock;
	NSMutableDictionary* _systemAppsVisibilityOverrides;
}
@property(retain) NSDictionary* pendingApplicationDictionaries;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)dealloc;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_registerForAVSystemControllerNotifications;
-(void)_mediaServerConnectionDied:(id)died;
-(void)_recordingStateChanged:(id)changed;
-(void)_unusuallyMutedAudioPlaying:(id)playing;
-(void)_lockStateChanged:(id)changed;
-(void)_updateLocationState;
-(void)buildLocationState;
-(int)locationStatusBarIconType;
-(id)allApplications;
-(id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
-(id)applicationsWithPid:(int)pid;
-(id)processWithPid:(int)pid;
-(id)applicationWithDisplayIdentifier:(id)displayIdentifier;
-(id)applicationWithPid:(int)pid;
-(id)iPod;
-(id)applicationCurrentlyRecordingAudio;
-(id)dataActivation;
-(id)setupApplication;
-(id)webApplications;
-(id)newsstandApps;
-(void)_preLoadApplications;
-(void)_sendInstalledAppsDidChangeNotification:(id)_sendInstalledApps removed:(id)removed modified:(id)modified;
-(void)_postLoadApplications:(id)applications removed:(id)removed modified:(id)modified updateRestrictions:(BOOL)restrictions;
-(void)_loadApplication:(id)application dictionary:(id)dictionary;
-(void)_loadApplication:(id)application dictionary:(id)dictionary allowDemoOnly:(BOOL)only;
-(id)_loadApplications:(BOOL)applications;
-(BOOL)loadApplication:(id)application;
-(id)loadApplications;
-(void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons4;
-(void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
-(void)uninstallApplication:(id)application;
-(void)_decrementUninstallationEventCount;
-(void)waitForOperationsToComplete;
-(Class)applicationClassForInfoDictionary:(id)infoDictionary;
-(void)loadApplicationsWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables;
-(BOOL)_hasRequiredCapabilities:(id)capabilities;
-(void)updateSchemesForInfoDictionary:(id)infoDictionary displayIdentifier:(id)identifier application:(id)application;
-(void)_applicationInstallationCallback:(id)callback;
-(void)_handleInstalledApplicationDictionaryIfReceived;
-(void)processPendingInstalls;
-(void)applicationStateChanged:(id)changed state:(unsigned)state;
-(void)_reloadBackgroundIDsDict;
-(void)_setSuspendTypeForApp:(id)app;
-(void)updateBackgroundAppPrefs;
-(int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
-(BOOL)_updateAppIconVisibilityOverrides;
@end
