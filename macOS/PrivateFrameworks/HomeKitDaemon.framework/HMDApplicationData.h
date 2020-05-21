//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString, NSUUID;

@interface HMDApplicationData : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>
{
    NSUUID *_parentUUID;
    NSUUID *_uuid;
    NSMutableDictionary *_appDataDictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *appDataDictionary; // @synthesize appDataDictionary=_appDataDictionary;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateParentUUIDIfNil:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)dumpState;
- (id)dictionary;
- (void)removeApplicationDataForIdentifier:(id)arg1;
- (id)applicationDataForIdentifier:(id)arg1;
- (void)setApplicationData:(id)arg1 forIdentifier:(id)arg2;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)initWithDictionary:(id)arg1 parentUUID:(id)arg2;
- (id)initWithParentUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

