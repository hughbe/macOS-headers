//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserCredentials, NSData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEORPProblemOptInRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _didOptIn;
    struct {
        unsigned int has_didOptIn:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_problemId:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_devicePushToken:1;
        unsigned int wrote_problemId:1;
        unsigned int wrote_userCredentials:1;
        unsigned int wrote_userEmail:1;
        unsigned int wrote_didOptIn:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *userEmail;
@property(readonly, nonatomic) BOOL hasUserEmail;
- (void)_readUserEmail;
@property(retain, nonatomic) NSData *devicePushToken;
@property(readonly, nonatomic) BOOL hasDevicePushToken;
- (void)_readDevicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;
@property(readonly, nonatomic) BOOL hasUserCredentials;
- (void)_readUserCredentials;
@property(nonatomic) BOOL hasDidOptIn;
@property(nonatomic) BOOL didOptIn;
@property(retain, nonatomic) NSString *problemId;
@property(readonly, nonatomic) BOOL hasProblemId;
- (void)_readProblemId;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;

@end

