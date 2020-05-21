//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_announcements;
    NSString *_languageCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_announcements:1;
        unsigned int read_languageCode:1;
        unsigned int wrote_announcements:1;
        unsigned int wrote_languageCode:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)announcementType;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) BOOL hasLanguageCode;
- (void)_readLanguageCode;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsCount;
- (void)_addNoFlagsAnnouncement:(id)arg1;
- (void)addAnnouncement:(id)arg1;
- (void)clearAnnouncements;
@property(retain, nonatomic) NSMutableArray *announcements;
- (void)_readAnnouncements;
- (id)initWithData:(id)arg1;
- (id)init;

@end

