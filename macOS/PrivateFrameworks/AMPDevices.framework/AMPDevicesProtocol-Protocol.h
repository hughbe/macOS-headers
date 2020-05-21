//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AMPDevice, AMPDeviceAccessibilityPrefs, AMPDeviceAutoFillPrefs, AMPDeviceSyncPrefs, NSArray, NSData, NSDictionary, NSProgress, NSString, NSURL;

@protocol AMPDevicesProtocol
- (void)deleteItemAtURL:(NSURL *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)renameItemAtURL:(NSURL *)arg1 to:(NSString *)arg2 withReply:(void (^)(NSDictionary *, NSError *))arg3;
- (NSProgress *)moveItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 withReply:(void (^)(NSDictionary *, NSError *))arg3;
- (NSProgress *)copyItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 withReply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchFileSharingItemsForApp:(NSString *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchFileSharingAppsForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (NSProgress *)startIPodVoiceOverKitInstallForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)fetchIPodVoiceOverKitStatusWithReply:(void (^)(BOOL, BOOL, NSError *))arg1;
- (void)ejectDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)revealDeviceInFinder:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)resetWarningsForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setName:(NSString *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)fetchBatteryInfoForDevice:(AMPDevice *)arg1 withReply:(void (^)(AMPDeviceBatteryInfo *, NSError *))arg2;
- (void)fetchDeviceIdentifiersWithReply:(void (^)(NSArray *, NSError *))arg1;
- (NSProgress *)registerForSoftwareUpdateRestoreProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)isSoftwareUpdateOrRestoreInProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)startSoftwareRestoreForDevice:(AMPDevice *)arg1 withOptions:(unsigned long long)arg2 withReply:(void (^)(NSError *))arg3;
- (void)startSoftwareUpdateForDevice:(AMPDevice *)arg1 withOptions:(unsigned long long)arg2 withReply:(void (^)(NSError *))arg3;
- (void)checkForSoftwareUpdatesForDevice:(AMPDevice *)arg1 withOptions:(unsigned long long)arg2 withReply:(void (^)(NSError *))arg3;
- (void)fetchSoftwareInfoForDevice:(AMPDevice *)arg1 withReply:(void (^)(AMPDeviceSoftwareInfo *, NSError *))arg2;
- (void)completeActivationForDevice:(AMPDevice *)arg1 withInfo:(NSDictionary *)arg2 withData:(NSData *)arg3 withHeaders:(NSDictionary *)arg4 withReply:(void (^)(NSError *))arg5;
- (void)fetchActivationInfoForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)fetchActivationStateForDevice:(AMPDevice *)arg1 withReply:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteBackup:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)archiveBackup:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (NSProgress *)registerForRestoreProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (NSProgress *)registerForBackupProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (NSProgress *)restoreDevice:(AMPDevice *)arg1 fromBackup:(NSDictionary *)arg2 withPassword:(NSString *)arg3 setPasswordInKeychain:(BOOL)arg4 withReply:(void (^)(NSError *))arg5;
- (void)isRestoreFromBackupInProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)cancelBackupForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (NSProgress *)backupDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)isBackupInProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)setKeychainBackupPassword:(NSString *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)fetchPasswordFromKeychainForBackup:(NSDictionary *)arg1 withReply:(void (^)(NSString *, NSError *))arg2;
- (void)fetchBackupPasswordFromKeychainForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSString *, NSError *))arg2;
- (void)changeBackupPasswordForDevice:(AMPDevice *)arg1 oldPassword:(NSString *)arg2 newPassword:(NSString *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)fetchAllBackupsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchBackupsForDevice:(AMPDevice *)arg1 includingIncompatibleBackups:(BOOL)arg2 includingAllCompatibleBackups:(BOOL)arg3 withReply:(void (^)(NSArray *, long long, NSError *))arg4;
- (void)fetchLastBackupDatesForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSDate *, NSDate *, NSError *))arg2;
- (void)fetchSyncErrorsForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)hasSyncErrorsForDevice:(AMPDevice *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)deleteObjects:(NSArray *)arg1 fromDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)copyFiles:(NSArray *)arg1 toDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)copyObjects:(NSArray *)arg1 toDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)canAcceptFiles:(NSArray *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)canAcceptObjects:(NSArray *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)autoFillMusicForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setAutoFillPrefs:(AMPDeviceAutoFillPrefs *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)fetchAutoFillPrefsForDevice:(AMPDevice *)arg1 withReply:(void (^)(AMPDeviceAutoFillPrefs *, NSError *))arg2;
- (void)checkForSyncWhenConnectedForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)stopSyncForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (NSProgress *)registerForSyncProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSError *))arg2;
- (NSProgress *)startSyncForDevice:(AMPDevice *)arg1 withOptions:(unsigned long long)arg2 withReply:(void (^)(NSError *))arg3;
- (void)isSyncInProgressForDevice:(AMPDevice *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)isSyncAllowedForDevice:(AMPDevice *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)fetchTotalsForDevice:(AMPDevice *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setAccessibilityPrefs:(AMPDeviceAccessibilityPrefs *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *, BOOL))arg3;
- (void)fetchAccessibilityPrefsForDevice:(AMPDevice *)arg1 withReply:(void (^)(AMPDeviceAccessibilityPrefs *, NSError *))arg2;
- (void)setSyncPrefs:(AMPDeviceSyncPrefs *)arg1 forDevice:(AMPDevice *)arg2 withReply:(void (^)(NSError *, BOOL))arg3;
- (void)fetchSettingsForDevice:(AMPDevice *)arg1 withReply:(void (^)(AMPDeviceInfo *, AMPDeviceSyncPrefs *, NSError *))arg2;
- (void)completeSetupForDevice:(AMPDevice *)arg1 didAcceptLicenseAgreement:(BOOL)arg2 didAcceptWarrantyInfo:(BOOL)arg3 withReply:(void (^)(NSError *))arg4;
- (void)fetchSetupInfoForDevice:(AMPDevice *)arg1 withReply:(void (^)(AMPDeviceSetupInfo *, NSError *))arg2;
@end

