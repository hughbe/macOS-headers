//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgStateMapRestore : PBCodable <NSCopying>
{
    NSMutableArray *_targetLayouts;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)targetLayoutType;
- (void).cxx_destruct;
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
- (id)targetLayoutAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetLayoutsCount;
- (void)addTargetLayout:(id)arg1;
- (void)clearTargetLayouts;
@property(retain, nonatomic) NSMutableArray *targetLayouts;

@end

