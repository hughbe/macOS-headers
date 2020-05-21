//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying>
{
    long long _downloadURLExpirationTimeSeconds;
    long long _size;
    NSString *_downloadURL;
    struct {
        unsigned int downloadURLExpirationTimeSeconds:1;
        unsigned int size:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long downloadURLExpirationTimeSeconds; // @synthesize downloadURLExpirationTimeSeconds=_downloadURLExpirationTimeSeconds;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(nonatomic) long long size; // @synthesize size=_size;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDownloadURLExpirationTimeSeconds;
@property(readonly, nonatomic) BOOL hasDownloadURL;
@property(nonatomic) BOOL hasSize;

@end

