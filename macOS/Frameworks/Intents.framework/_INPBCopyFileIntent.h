//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCopyFileIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBCopyFileIntent : PBCodable <_INPBCopyFileIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int destinationType:1;
        unsigned int entityType:1;
        unsigned int sourceType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _destinationType;
    int _entityType;
    int _sourceType;
    _INPBString *_destinationName;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_properties;
    _INPBString *_sourceName;
}

+ (BOOL)supportsSecureCoding;
+ (Class)propertiesType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) _INPBString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;
@property(retain, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsSourceType:(id)arg1;
- (id)sourceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSourceType;
@property(readonly, nonatomic) BOOL hasSourceName;
- (id)propertiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long propertiesCount;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEntityType;
@property(readonly, nonatomic) BOOL hasEntityName;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDestinationType;
@property(readonly, nonatomic) BOOL hasDestinationName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

