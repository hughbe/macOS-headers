//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMCRMergeableDataType-Protocol.h>
#import <ReminderKit/REMDAChangedIdentifierResult-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface REMObjectID : NSObject <REMDAChangedIdentifierResult, REMCRMergeableDataType, NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
    NSString *_entityName;
}

+ (BOOL)supportsSecureCoding;
+ (id)objectIDWithURL:(id)arg1;
+ (id)objectIDWithUUID:(id)arg1 entityName:(id)arg2;
+ (void)initialize;
+ (void)rem_registerClassAtCRCoderIfNeeded;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)redactedDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSURL *urlRepresentation;
@property(readonly, nonatomic) NSString *stringRepresentation;
- (id)initWithUUID:(id)arg1 entityName:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

