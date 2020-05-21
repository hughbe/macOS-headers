//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPListRange, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying>
{
    CKDPListRange *_range;
    NSMutableArray *_values;
}

+ (Class)valueType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;
@property(readonly, nonatomic) BOOL hasRange;

@end

