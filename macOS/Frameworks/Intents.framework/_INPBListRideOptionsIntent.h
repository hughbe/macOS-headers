//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBListRideOptionsIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBListRideOptionsIntent : PBCodable <_INPBListRideOptionsIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBLocation *_dropOffLocation;
    _INPBIntentMetadata *_intentMetadata;
    _INPBLocation *_pickupLocation;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBLocation *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBLocation *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasPickupLocation;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasDropOffLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

