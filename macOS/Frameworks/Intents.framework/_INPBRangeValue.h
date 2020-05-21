//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRangeValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBRangeValue : PBCodable <_INPBRangeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int length:1;
        unsigned int location:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    unsigned long long _length;
    unsigned long long _location;
    _INPBValueMetadata *_valueMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(nonatomic) BOOL hasLocation;
@property(nonatomic) BOOL hasLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

