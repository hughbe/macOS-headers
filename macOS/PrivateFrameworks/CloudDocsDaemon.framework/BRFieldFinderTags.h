//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying>
{
    NSMutableArray *_tags;
}

+ (Class)tagsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)tagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tagsCount;
- (void)addTags:(id)arg1;
- (void)clearTags;

@end

