//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEORPUserCredentials, GEOServicesState, NSMutableArray, NSString, PBDataReader;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    GEOABSecondPartyPlaceRequestClientMetaData *_abAssignmentMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    NSMutableArray *_problemIds;
    GEOServicesState *_servicesState;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_abAssignmentMetadata:1;
        unsigned int read_analyticMetadata:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_problemIds:1;
        unsigned int read_servicesState:1;
        unsigned int read_statusNotificationId:1;
        unsigned int read_userCredentials:1;
        unsigned int wrote_abAssignmentMetadata:1;
        unsigned int wrote_analyticMetadata:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_problemIds:1;
        unsigned int wrote_servicesState:1;
        unsigned int wrote_statusNotificationId:1;
        unsigned int wrote_userCredentials:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)problemIdType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOServicesState *servicesState;
@property(readonly, nonatomic) BOOL hasServicesState;
- (void)_readServicesState;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abAssignmentMetadata;
@property(readonly, nonatomic) BOOL hasAbAssignmentMetadata;
- (void)_readAbAssignmentMetadata;
@property(retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property(readonly, nonatomic) BOOL hasAnalyticMetadata;
- (void)_readAnalyticMetadata;
@property(retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
- (void)_readClientCapabilities;
- (id)problemIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)problemIdsCount;
- (void)_addNoFlagsProblemId:(id)arg1;
- (void)addProblemId:(id)arg1;
- (void)clearProblemIds;
@property(retain, nonatomic) NSMutableArray *problemIds;
- (void)_readProblemIds;
@property(retain, nonatomic) NSString *statusNotificationId;
@property(readonly, nonatomic) BOOL hasStatusNotificationId;
- (void)_readStatusNotificationId;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;
@property(readonly, nonatomic) BOOL hasUserCredentials;
- (void)_readUserCredentials;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)populateAnalyticsMetadata;

@end

