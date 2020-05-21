//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <APTransport/NSObject-Protocol.h>

@class APBluetoothClient, NSDictionary, NSError, NSUUID;

@protocol APBluetoothClientDelegate <NSObject>
- (void)airPlaySolo:(APBluetoothClient *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySoloDidUpdateState:(APBluetoothClient *)arg1;

@optional
- (void)airPlaySolo:(APBluetoothClient *)arg1 didLosePeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySolo:(APBluetoothClient *)arg1 didStopTrackingPeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySolo:(APBluetoothClient *)arg1 didStartTrackingPeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)airPlaySolo:(APBluetoothClient *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)airPlaySoloStoppedScanning:(APBluetoothClient *)arg1;
- (void)airPlaySoloStartedScanning:(APBluetoothClient *)arg1;
- (void)airPlaySolo:(APBluetoothClient *)arg1 failedToStartAdvertisingWithError:(NSError *)arg2;
- (void)airPlaySoloStoppedAdvertising:(APBluetoothClient *)arg1;
- (void)airPlaySoloAdvertisingPending:(APBluetoothClient *)arg1;
- (void)airPlaySoloStartedAdvertising:(APBluetoothClient *)arg1;
@end

