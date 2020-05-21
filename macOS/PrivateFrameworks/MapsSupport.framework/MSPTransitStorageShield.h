//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitShieldDataSource-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _shieldType;
    NSString *_shieldColorString;
    NSString *_shieldText;
    struct {
        unsigned int shieldType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shieldColorString; // @synthesize shieldColorString=_shieldColorString;
@property(nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(retain, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasShieldColorString;
@property(nonatomic) BOOL hasShieldType;
@property(readonly, nonatomic) BOOL hasShieldText;
- (id)initWithShield:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

