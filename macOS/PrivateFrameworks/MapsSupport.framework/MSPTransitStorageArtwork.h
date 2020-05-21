//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitArtworkDataSource-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class MSPTransitStorageIcon, MSPTransitStorageShield, NSString, PBUnknownFields;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityText;
    int _artworkSourceType;
    int _artworkUseType;
    MSPTransitStorageIcon *_icon;
    MSPTransitStorageShield *_iconFallbackShield;
    MSPTransitStorageShield *_shield;
    BOOL _hasRoutingIncidentBadge;
    struct {
        unsigned int artworkSourceType:1;
        unsigned int artworkUseType:1;
        unsigned int hasRoutingIncidentBadge:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) BOOL hasRoutingIncidentBadge; // @synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge;
@property(retain, nonatomic) MSPTransitStorageShield *iconFallbackShield; // @synthesize iconFallbackShield=_iconFallbackShield;
@property(retain, nonatomic) MSPTransitStorageIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) MSPTransitStorageShield *shield; // @synthesize shield=_shield;
@property(nonatomic) int artworkUseType; // @synthesize artworkUseType=_artworkUseType;
@property(nonatomic) int artworkSourceType; // @synthesize artworkSourceType=_artworkSourceType;
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
@property(readonly, nonatomic) BOOL hasAccessibilityText;
@property(nonatomic) BOOL hasHasRoutingIncidentBadge;
@property(readonly, nonatomic) BOOL hasIconFallbackShield;
@property(readonly, nonatomic) BOOL hasIcon;
@property(readonly, nonatomic) BOOL hasShield;
- (int)StringAsArtworkUseType:(id)arg1;
- (id)artworkUseTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasArtworkUseType;
- (int)StringAsArtworkSourceType:(id)arg1;
- (id)artworkSourceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasArtworkSourceType;
@property(readonly, nonatomic) id <GEOTransitTextDataSource> textDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
- (id)initWithArtwork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

