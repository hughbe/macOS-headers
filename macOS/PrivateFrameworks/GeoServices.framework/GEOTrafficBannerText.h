//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTrafficBannerText : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_bannerLargeText;
    GEOFormattedString *_bannerSmallText;
    NSMutableArray *_localizedIncidentBanners;
    NSMutableArray *_localizedIncidentSpokenTexts;
    NSMutableArray *_localizedIncidentSubBanners;
    GEOFormattedString *_spokenPrompt;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _bannerStyle;
    unsigned int _hideAtDistance;
    unsigned int _incidentDistance;
    unsigned int _incidentIndex;
    int _previousBannerChange;
    unsigned int _secondsSaved;
    unsigned int _showAtDistance;
    BOOL _disableFasterRerouteByDefault;
    struct {
        unsigned int has_bannerStyle:1;
        unsigned int has_hideAtDistance:1;
        unsigned int has_incidentDistance:1;
        unsigned int has_incidentIndex:1;
        unsigned int has_previousBannerChange:1;
        unsigned int has_secondsSaved:1;
        unsigned int has_showAtDistance:1;
        unsigned int has_disableFasterRerouteByDefault:1;
        unsigned int read_unknownFields:1;
        unsigned int read_bannerLargeText:1;
        unsigned int read_bannerSmallText:1;
        unsigned int read_localizedIncidentBanners:1;
        unsigned int read_localizedIncidentSpokenTexts:1;
        unsigned int read_localizedIncidentSubBanners:1;
        unsigned int read_spokenPrompt:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_bannerLargeText:1;
        unsigned int wrote_bannerSmallText:1;
        unsigned int wrote_localizedIncidentBanners:1;
        unsigned int wrote_localizedIncidentSpokenTexts:1;
        unsigned int wrote_localizedIncidentSubBanners:1;
        unsigned int wrote_spokenPrompt:1;
        unsigned int wrote_bannerStyle:1;
        unsigned int wrote_hideAtDistance:1;
        unsigned int wrote_incidentDistance:1;
        unsigned int wrote_incidentIndex:1;
        unsigned int wrote_previousBannerChange:1;
        unsigned int wrote_secondsSaved:1;
        unsigned int wrote_showAtDistance:1;
        unsigned int wrote_disableFasterRerouteByDefault:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)localizedIncidentSpokenTextType;
+ (Class)localizedIncidentSubBannerType;
+ (Class)localizedIncidentBannerType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSecondsSaved;
@property(nonatomic) unsigned int secondsSaved;
- (int)StringAsBannerStyle:(id)arg1;
- (id)bannerStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasBannerStyle;
@property(nonatomic) int bannerStyle;
@property(nonatomic) BOOL hasDisableFasterRerouteByDefault;
@property(nonatomic) BOOL disableFasterRerouteByDefault;
- (int)StringAsPreviousBannerChange:(id)arg1;
- (id)previousBannerChangeAsString:(int)arg1;
@property(nonatomic) BOOL hasPreviousBannerChange;
@property(nonatomic) int previousBannerChange;
@property(nonatomic) BOOL hasIncidentIndex;
@property(nonatomic) unsigned int incidentIndex;
@property(nonatomic) BOOL hasIncidentDistance;
@property(nonatomic) unsigned int incidentDistance;
@property(nonatomic) BOOL hasHideAtDistance;
@property(nonatomic) unsigned int hideAtDistance;
@property(nonatomic) BOOL hasShowAtDistance;
@property(nonatomic) unsigned int showAtDistance;
@property(retain, nonatomic) GEOFormattedString *spokenPrompt;
@property(readonly, nonatomic) BOOL hasSpokenPrompt;
- (void)_readSpokenPrompt;
@property(retain, nonatomic) GEOFormattedString *bannerSmallText;
@property(readonly, nonatomic) BOOL hasBannerSmallText;
- (void)_readBannerSmallText;
@property(retain, nonatomic) GEOFormattedString *bannerLargeText;
@property(readonly, nonatomic) BOOL hasBannerLargeText;
- (void)_readBannerLargeText;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentSpokenTextsCount;
- (void)_addNoFlagsLocalizedIncidentSpokenText:(id)arg1;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (void)clearLocalizedIncidentSpokenTexts;
@property(retain, nonatomic) NSMutableArray *localizedIncidentSpokenTexts;
- (void)_readLocalizedIncidentSpokenTexts;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentSubBannersCount;
- (void)_addNoFlagsLocalizedIncidentSubBanner:(id)arg1;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (void)clearLocalizedIncidentSubBanners;
@property(retain, nonatomic) NSMutableArray *localizedIncidentSubBanners;
- (void)_readLocalizedIncidentSubBanners;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentBannersCount;
- (void)_addNoFlagsLocalizedIncidentBanner:(id)arg1;
- (void)addLocalizedIncidentBanner:(id)arg1;
- (void)clearLocalizedIncidentBanners;
@property(retain, nonatomic) NSMutableArray *localizedIncidentBanners;
- (void)_readLocalizedIncidentBanners;
- (id)initWithData:(id)arg1;
- (id)init;

@end

