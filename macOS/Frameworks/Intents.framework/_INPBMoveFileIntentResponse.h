//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMoveFileIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBString;

@interface _INPBMoveFileIntentResponse : PBCodable <_INPBMoveFileIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _entityTypes;
    struct {
        unsigned int overwrite:1;
        unsigned int success:1;
    } _has;
    BOOL _overwrite;
    BOOL _success;
    BOOL __encodeLegacyGloryData;
    _INPBString *_destinationName;
    NSArray *_entityNames;
    _INPBString *_sourceName;
}

+ (BOOL)supportsSecureCoding;
+ (Class)entityNameType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(retain, nonatomic) _INPBString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) BOOL overwrite; // @synthesize overwrite=_overwrite;
@property(copy, nonatomic) NSArray *entityNames; // @synthesize entityNames=_entityNames;
@property(retain, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasSuccess;
@property(readonly, nonatomic) BOOL hasSourceName;
@property(nonatomic) BOOL hasOverwrite;
- (int)StringAsEntityTypes:(id)arg1;
- (id)entityTypesAsString:(int)arg1;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityTypesCount;
- (void)addEntityType:(int)arg1;
- (void)clearEntityTypes;
@property(readonly, nonatomic) int *entityTypes;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)entityNameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
- (void)addEntityName:(id)arg1;
- (void)clearEntityNames;
@property(readonly, nonatomic) BOOL hasDestinationName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

