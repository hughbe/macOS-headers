//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPFeedbackCommonContext, GEORPFeedbackCommonCorrections, GEORPFeedbackDetails, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackSubmissionParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientSubmissionUuid;
    GEORPFeedbackCommonContext *_commonContext;
    GEORPFeedbackCommonCorrections *_commonCorrections;
    GEORPFeedbackDetails *_details;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _type;
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientSubmissionUuid:1;
        unsigned int read_commonContext:1;
        unsigned int read_commonCorrections:1;
        unsigned int read_details:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientSubmissionUuid:1;
        unsigned int wrote_commonContext:1;
        unsigned int wrote_commonCorrections:1;
        unsigned int wrote_details:1;
        unsigned int wrote_type:1;
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
@property(retain, nonatomic) GEORPFeedbackCommonCorrections *commonCorrections;
@property(readonly, nonatomic) BOOL hasCommonCorrections;
- (void)_readCommonCorrections;
@property(retain, nonatomic) GEORPFeedbackCommonContext *commonContext;
@property(readonly, nonatomic) BOOL hasCommonContext;
- (void)_readCommonContext;
@property(retain, nonatomic) GEORPFeedbackDetails *details;
@property(readonly, nonatomic) BOOL hasDetails;
- (void)_readDetails;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(retain, nonatomic) NSString *clientSubmissionUuid;
@property(readonly, nonatomic) BOOL hasClientSubmissionUuid;
- (void)_readClientSubmissionUuid;
- (id)initWithData:(id)arg1;
- (id)init;

@end

