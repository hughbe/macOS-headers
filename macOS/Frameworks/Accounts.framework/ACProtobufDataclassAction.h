//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACProtobufDataclassAction : PBCodable <NSCopying>
{
    NSMutableArray *_affectedContainers;
    int _type;
    BOOL _destructive;
}

+ (Class)affectedContainersType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *affectedContainers; // @synthesize affectedContainers=_affectedContainers;
@property(nonatomic) BOOL destructive; // @synthesize destructive=_destructive;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)affectedContainersAtIndex:(unsigned long long)arg1;
- (unsigned long long)affectedContainersCount;
- (void)addAffectedContainers:(id)arg1;
- (void)clearAffectedContainers;

@end

