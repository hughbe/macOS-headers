//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTaskList-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime;

@interface _INPBTaskList : PBCodable <_INPBTaskList, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBDateTime *_createdDateTime;
    _INPBDataString *_groupName;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    NSArray *_tasks;
    _INPBDataString *_title;
}

+ (BOOL)supportsSecureCoding;
+ (Class)tasksType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDataString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTitle;
- (id)tasksAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long tasksCount;
- (void)addTasks:(id)arg1;
- (void)clearTasks;
@property(readonly, nonatomic) BOOL hasModifiedDateTime;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(readonly, nonatomic) BOOL hasCreatedDateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

