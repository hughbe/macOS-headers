//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_idsToArchives;
}

+ (Class)idsToArchiveType;
+ (id)options;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *idsToArchives; // @synthesize idsToArchives=_idsToArchives;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)idsToArchiveAtIndex:(unsigned long long)arg1;
- (unsigned long long)idsToArchivesCount;
- (void)addIdsToArchive:(id)arg1;
- (void)clearIdsToArchives;

@end

