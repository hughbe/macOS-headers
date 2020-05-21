//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/NSObject-Protocol.h>

@class CBCentralManager, CBPeripheral, NSDictionary, NSError, NSNumber;

@protocol CBCentralManagerDelegate <NSObject>
- (void)centralManagerDidUpdateState:(CBCentralManager *)arg1;

@optional
- (void)centralManager:(CBCentralManager *)arg1 didUpdateANCSAuthorizationForPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(CBPeripheral *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didDisconnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didFailToConnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didConnectPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 willRestoreState:(NSDictionary *)arg2;
@end

