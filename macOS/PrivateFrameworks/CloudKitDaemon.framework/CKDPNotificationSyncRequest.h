//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPNotificationSyncRequest : PBRequest <NSCopying>
{
    unsigned int _maxChanges;
    NSData *_serverChangeToken;
    BOOL _wantsChanges;
    struct {
        unsigned int maxChanges:1;
        unsigned int wantsChanges:1;
    } _has;
}

+ (id)options;
- (void).cxx_destruct;
@property(nonatomic) BOOL wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) unsigned int maxChanges; // @synthesize maxChanges=_maxChanges;
@property(retain, nonatomic) NSData *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasWantsChanges;
@property(nonatomic) BOOL hasMaxChanges;
@property(readonly, nonatomic) BOOL hasServerChangeToken;

@end

