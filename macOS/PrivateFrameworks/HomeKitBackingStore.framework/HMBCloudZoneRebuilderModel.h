//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBCloudZoneRebuilderModel : HMBModel
{
}

+ (id)sentinelUUID;
+ (id)hmbProperties;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSNumber *hasCompleted; // @dynamic hasCompleted;
@property(retain, nonatomic) NSUUID *uniqueToken; // @dynamic uniqueToken;

@end

