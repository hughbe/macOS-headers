//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOBluetoothCloudServerClient : NSObject
{
}

+ (void)upgradeToManatee:(id)arg1 accessoryKey:(id)arg2;
+ (void)deleteOldContainer;
+ (void)getIDSLocalDeviceInfo;
+ (void)deleteManateeAccessoryZone;
+ (void)readNewContainer;
+ (void)readOldContainer;
+ (void)uploadHSA2Key:(id)arg1;
+ (void)fetchHSA2Key;
+ (void)checkManateeAccountSupport;
+ (void)keymismatch:(id)arg1;
+ (void)sendCloudpairingRetry:(id)arg1;
+ (void)getSignInStatus;
+ (void)deleteAccessoryZone;
+ (void)fetchKeyBlob;
+ (void)fetchAccessoryKeyBlob;
+ (void)updateAccessoryBlob:(id)arg1;
+ (void)updateKeyBlob:(id)arg1;
+ (void)updateCloudPairedList;
+ (void)keyDict:(id)arg1;
+ (void)iCloudPairing;

@end

