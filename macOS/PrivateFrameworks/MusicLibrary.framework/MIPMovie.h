//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPArtist, NSData, NSString;

@interface MIPMovie : PBCodable <NSCopying>
{
    long long _rentalDuration;
    long long _rentalPlaybackDuration;
    long long _rentalPlaybackStartedDateTime;
    long long _rentalStartedDateTime;
    MIPArtist *_artist;
    int _audioLanguage;
    int _audioTrackId;
    int _audioTrackIndex;
    NSString *_extendedContentName;
    NSData *_flattenedChapterData;
    NSString *_movieInfo;
    int _subtitleLanguage;
    int _subtitleTrackIndex;
    int _videoQuality;
    BOOL _hasAlternateAudio;
    BOOL _hasChapterData;
    BOOL _hasSubtitles;
    BOOL _rental;
    struct {
        unsigned int rentalDuration:1;
        unsigned int rentalPlaybackDuration:1;
        unsigned int rentalPlaybackStartedDateTime:1;
        unsigned int rentalStartedDateTime:1;
        unsigned int audioLanguage:1;
        unsigned int audioTrackId:1;
        unsigned int audioTrackIndex:1;
        unsigned int subtitleLanguage:1;
        unsigned int subtitleTrackIndex:1;
        unsigned int videoQuality:1;
        unsigned int hasAlternateAudio:1;
        unsigned int hasChapterData:1;
        unsigned int hasSubtitles:1;
        unsigned int rental:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *flattenedChapterData; // @synthesize flattenedChapterData=_flattenedChapterData;
@property(nonatomic) long long rentalStartedDateTime; // @synthesize rentalStartedDateTime=_rentalStartedDateTime;
@property(nonatomic) long long rentalPlaybackStartedDateTime; // @synthesize rentalPlaybackStartedDateTime=_rentalPlaybackStartedDateTime;
@property(nonatomic) long long rentalPlaybackDuration; // @synthesize rentalPlaybackDuration=_rentalPlaybackDuration;
@property(nonatomic) long long rentalDuration; // @synthesize rentalDuration=_rentalDuration;
@property(nonatomic) int subtitleTrackIndex; // @synthesize subtitleTrackIndex=_subtitleTrackIndex;
@property(nonatomic) int subtitleLanguage; // @synthesize subtitleLanguage=_subtitleLanguage;
@property(nonatomic) int audioTrackId; // @synthesize audioTrackId=_audioTrackId;
@property(nonatomic) int audioTrackIndex; // @synthesize audioTrackIndex=_audioTrackIndex;
@property(nonatomic) int audioLanguage; // @synthesize audioLanguage=_audioLanguage;
@property(nonatomic) BOOL hasSubtitles; // @synthesize hasSubtitles=_hasSubtitles;
@property(nonatomic) BOOL hasAlternateAudio; // @synthesize hasAlternateAudio=_hasAlternateAudio;
@property(retain, nonatomic) NSString *movieInfo; // @synthesize movieInfo=_movieInfo;
@property(retain, nonatomic) NSString *extendedContentName; // @synthesize extendedContentName=_extendedContentName;
@property(nonatomic) BOOL hasChapterData; // @synthesize hasChapterData=_hasChapterData;
@property(nonatomic) BOOL rental; // @synthesize rental=_rental;
@property(nonatomic) int videoQuality; // @synthesize videoQuality=_videoQuality;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFlattenedChapterData;
@property(nonatomic) BOOL hasRentalStartedDateTime;
@property(nonatomic) BOOL hasRentalPlaybackStartedDateTime;
@property(nonatomic) BOOL hasRentalPlaybackDuration;
@property(nonatomic) BOOL hasRentalDuration;
@property(nonatomic) BOOL hasSubtitleTrackIndex;
@property(nonatomic) BOOL hasSubtitleLanguage;
@property(nonatomic) BOOL hasAudioTrackId;
@property(nonatomic) BOOL hasAudioTrackIndex;
@property(nonatomic) BOOL hasAudioLanguage;
@property(nonatomic) BOOL hasHasSubtitles;
@property(nonatomic) BOOL hasHasAlternateAudio;
@property(readonly, nonatomic) BOOL hasMovieInfo;
@property(readonly, nonatomic) BOOL hasExtendedContentName;
@property(nonatomic) BOOL hasHasChapterData;
@property(nonatomic) BOOL hasRental;
@property(nonatomic) BOOL hasVideoQuality;
@property(readonly, nonatomic) BOOL hasArtist;

@end

