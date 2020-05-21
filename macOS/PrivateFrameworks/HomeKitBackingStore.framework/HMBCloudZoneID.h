//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBCloudID.h>

#import <HomeKitBackingStore/HMBLocalZoneID-Protocol.h>
#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>

@class CKRecordZoneID, NSArray, NSData, NSString;

@interface HMBCloudZoneID : HMBCloudID <HMBModelObjectStorage, HMBLocalZoneID>
{
    NSData *_token;
    CKRecordZoneID *_zoneID;
}

+ (BOOL)supportsSecureCoding;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *labels;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3 name:(id)arg4 modelID:(id)arg5;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

