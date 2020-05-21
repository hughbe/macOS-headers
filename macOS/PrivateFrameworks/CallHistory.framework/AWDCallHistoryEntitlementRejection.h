//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDCallHistoryEntitlementRejection : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _pid;
    NSString *_procname;
    struct {
        unsigned int timestamp:1;
        unsigned int pid:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *procname; // @synthesize procname=_procname;
@property(nonatomic) unsigned int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasProcname;
@property(nonatomic) BOOL hasPid;
@property(nonatomic) BOOL hasTimestamp;

@end

