/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SBBluetoothController : XXUnknownSuperclass {
	NSMutableArray* _devices;
}
+(id)sharedInstance;
-(void)dealloc;
-(id)firstBTDeviceToReportBatteryLevel;
-(BOOL)canReportBatteryLevel;
-(int)batteryLevel;
-(void)noteDevicesChanged;
-(void)startWatchingForDevices;
-(void)stopWatchingForDevices;
-(void)iapDeviceChanged:(id)changed;
-(void)addDeviceNotification:(id)notification;
-(void)removeDeviceNotification:(id)notification;
-(void)connectionChanged:(id)changed;
-(void)batteryChanged:(id)changed;
-(void)updateBattery;
-(id)deviceForAudioRoute:(id)audioRoute;
-(BOOL)tetheringConnected;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)control;
-(void)bluetoothDeviceEndedVoiceControl:(id)control;
@end
