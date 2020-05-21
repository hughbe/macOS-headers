//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSaveHealthSampleIntent-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBWellnessUnitType;

@interface _INPBSaveHealthSampleIntent : PBCodable <_INPBSaveHealthSampleIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int objectType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _objectType;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDateTimeRange *_recordDate;
    NSArray *_sampleMetadatas;
    _INPBWellnessUnitType *_unit;
    NSArray *_values;
}

+ (BOOL)supportsSecureCoding;
+ (Class)valuesType;
+ (Class)sampleMetadataType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) _INPBWellnessUnitType *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSArray *sampleMetadatas; // @synthesize sampleMetadatas=_sampleMetadatas;
@property(retain, nonatomic) _INPBDateTimeRange *recordDate; // @synthesize recordDate=_recordDate;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)valuesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValues:(id)arg1;
- (void)clearValues;
@property(readonly, nonatomic) BOOL hasUnit;
- (id)sampleMetadataAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long sampleMetadatasCount;
- (void)addSampleMetadata:(id)arg1;
- (void)clearSampleMetadatas;
@property(readonly, nonatomic) BOOL hasRecordDate;
- (int)StringAsObjectType:(id)arg1;
- (id)objectTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasObjectType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

