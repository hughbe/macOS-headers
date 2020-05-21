//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, NSUUID, PBDataReader, PBUnknownFields;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _eventDate;
    NSString *_eventName;
    NSString *_loiIdentifierString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _loiType;
    BOOL _isEventAllDay;
    struct {
        unsigned int has_eventDate:1;
        unsigned int has_loiType:1;
        unsigned int has_isEventAllDay:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventName:1;
        unsigned int read_loiIdentifierString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_eventDate:1;
        unsigned int wrote_eventName:1;
        unsigned int wrote_loiIdentifierString:1;
        unsigned int wrote_loiType:1;
        unsigned int wrote_isEventAllDay:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *loiIdentifierString;
@property(readonly, nonatomic) BOOL hasLoiIdentifierString;
- (void)_readLoiIdentifierString;
@property(nonatomic) BOOL hasIsEventAllDay;
@property(nonatomic) BOOL isEventAllDay;
@property(nonatomic) BOOL hasEventDate;
@property(nonatomic) double eventDate;
@property(retain, nonatomic) NSString *eventName;
@property(readonly, nonatomic) BOOL hasEventName;
- (void)_readEventName;
- (int)StringAsLoiType:(id)arg1;
- (id)loiTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLoiType;
@property(nonatomic) int loiType;
- (id)initWithData:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSUUID *loiIdentifier;

@end

