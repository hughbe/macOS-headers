//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDNetworkContext : NSObject
{
}

+ (long long)cellUploadCost:(id)arg1;
+ (long long)cellDownloadCost:(id)arg1;
+ (BOOL)cellInterfaceUp:(id)arg1;
+ (BOOL)networkingAvailable:(id)arg1;
+ (BOOL)inexpensiveNetworkingAvailable:(id)arg1;
+ (long long)cellQuality:(id)arg1;
+ (long long)wifiQuality:(id)arg1;
+ (long long)wiredQuality:(id)arg1;
+ (long long)qualityForPath:(id)arg1 inContext:(id)arg2;
+ (id)predictionKey;
+ (id)loiKey;
+ (id)uploadPowerCostKey;
+ (id)downloadPowerCostKey;
+ (id)interfaceUpKey;
+ (id)connectionQualityKey;
+ (id)keyPathForCellConnectionStatus;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)keyPathForWiredConnectionStatus;

@end

