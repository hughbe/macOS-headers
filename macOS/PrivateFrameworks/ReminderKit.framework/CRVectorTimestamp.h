//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/CRCoding-Protocol.h>
#import <ReminderKit/CRDataType-Protocol.h>
#import <ReminderKit/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CRVectorTimestamp : NSObject <CRDataType, NSCopying, CRCoding>
{
    NSMutableDictionary *_clock;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)shortDescription;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (void)minusVectorTimestamp:(id)arg1;
- (unsigned long long)compare:(id)arg1;
- (id)sortedUUIDs;
- (id)allUUIDs;
- (void)removeUUID:(id)arg1;
- (void)maxClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)incrementClockForUUID:(id)arg1;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (unsigned long long)subclockForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
- (id)timestampForReplica:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeIntoProtobufTimestamp:(VectorTimestamp_c98372c7 *)arg1 coder:(id)arg2;
- (id)initWithProtobufTimestamp:(const VectorTimestamp_c98372c7 *)arg1 decoder:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

