//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying>
{
    int _navVoiceVolume;
    int _preferredTransportMode;
    BOOL _avoidHighways;
    BOOL _avoidTolls;
    BOOL _findMyCarEnabled;
    BOOL _headingEnabled;
    BOOL _labelEnabled;
    BOOL _pauseSpokenAudioEnabled;
    BOOL _speedLimitEnabled;
    BOOL _trafficEnabled;
    struct {
        unsigned int has_navVoiceVolume:1;
        unsigned int has_preferredTransportMode:1;
        unsigned int has_avoidHighways:1;
        unsigned int has_avoidTolls:1;
        unsigned int has_findMyCarEnabled:1;
        unsigned int has_headingEnabled:1;
        unsigned int has_labelEnabled:1;
        unsigned int has_pauseSpokenAudioEnabled:1;
        unsigned int has_speedLimitEnabled:1;
        unsigned int has_trafficEnabled:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasLabelEnabled;
@property(nonatomic) BOOL labelEnabled;
@property(nonatomic) BOOL hasTrafficEnabled;
@property(nonatomic) BOOL trafficEnabled;
@property(nonatomic) BOOL hasFindMyCarEnabled;
@property(nonatomic) BOOL findMyCarEnabled;
@property(nonatomic) BOOL hasPauseSpokenAudioEnabled;
@property(nonatomic) BOOL pauseSpokenAudioEnabled;
- (int)StringAsNavVoiceVolume:(id)arg1;
- (id)navVoiceVolumeAsString:(int)arg1;
@property(nonatomic) BOOL hasNavVoiceVolume;
@property(nonatomic) int navVoiceVolume;
@property(nonatomic) BOOL hasSpeedLimitEnabled;
@property(nonatomic) BOOL speedLimitEnabled;
@property(nonatomic) BOOL hasHeadingEnabled;
@property(nonatomic) BOOL headingEnabled;
@property(nonatomic) BOOL hasAvoidHighways;
@property(nonatomic) BOOL avoidHighways;
@property(nonatomic) BOOL hasAvoidTolls;
@property(nonatomic) BOOL avoidTolls;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (id)preferredTransportModeAsString:(int)arg1;
@property(nonatomic) BOOL hasPreferredTransportMode;
@property(nonatomic) int preferredTransportMode;

@end

