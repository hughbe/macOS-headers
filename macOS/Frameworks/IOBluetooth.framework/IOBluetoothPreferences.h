//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSUserDefaults;

@interface IOBluetoothPreferences : NSObject
{
    NSUserDefaults *bluetoothPrefs;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)sharedPreferences;
@property(readonly) BOOL disableUIServerSSPConfirmation;
@property(readonly) BOOL disableUIServerLegacyPairingConfirmation;
- (void)setInquiryThreshold:(BOOL)arg1;
- (void)setDefaultInquiryTime:(unsigned char)arg1;
@property BOOL loggingEnabled;
@property BOOL autoSeekPointingDevice;
@property BOOL autoSeekKeyboard;
@property BOOL OBEXFileTransferAllowsDelete;
@property BOOL OBEXObjectPushRequiresPairing;
@property BOOL OBEXFTPRequiresPairing;
@property int OBEXBrowseConnectionHandling;
@property unsigned int OBEXOtherDataDisposition;
@property int OBEXFileHandling;
@property(copy) NSString *OBEXBrowseRootDirectory;
@property(copy) NSString *OBEXPushDestinationDirectory;
@property BOOL fileTransferServicesEnabled;
- (id)attributesForDevice:(id)arg1;
@property(readonly) NSDictionary *deviceCache;
- (void)updateDeviceAccessTime:(id)arg1;
@property(readonly) NSDictionary *deviceAccessTimes;
@property(readonly) NSArray *MagicCloudPairedDevices;
@property(readonly) NSArray *usbBluetoothDevices;
@property(readonly) NSArray *disallowRoleSwitchDevices;
@property(readonly) NSArray *LEPairedDevices;
@property(readonly) NSArray *BRPairedDevices;
@property(readonly) NSArray *pairedDevices;
@property(readonly) NSArray *serialDevices;
@property(readonly) NSArray *fastConnectReadyDevices;
@property(readonly) NSArray *idsPairedDevicesForUser;
@property(readonly) NSArray *idsPairedDevices;
@property(readonly) NSArray *panDevices;
@property(readonly) NSArray *hidDevices;
@property(readonly) NSArray *configuredDevices;
- (void)removeLaunchableApplication:(id)arg1;
- (void)addLaunchableApplication:(id)arg1;
@property(readonly) NSArray *launchableApplications;
- (void)removeFavoriteDevice:(id)arg1;
- (void)addFavoriteDevice:(id)arg1;
@property(readonly) NSArray *favoriteDevices;
@property BOOL remoteWakeEnabled;
@property BOOL discoverable;
@property BOOL isLocked;
- (void)_setPoweredOn:(BOOL)arg1;
@property BOOL poweredOn;
- (BOOL)userReallyWantsBTOff;
- (BOOL)safeToPowerOff:(BOOL)arg1;
- (void)deviceWasUpdated:(id)arg1;
- (void)synchronize;
@property BOOL wasUpdated;
- (void)postPreferencesChangedNotification;
- (void)setPreference:(id)arg1 forKey:(id)arg2;
- (id)systemPreferenceForKey:(id)arg1;
- (void)updatePreferencesInBluetoothd;
@property(readonly) BOOL isServer;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (id)autorelease;
- (id)init;

@end

