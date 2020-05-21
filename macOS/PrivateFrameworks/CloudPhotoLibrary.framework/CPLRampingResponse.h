//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLRampingResponse : PBCodable <NSCopying>
{
    NSMutableArray *_responses;
}

+ (Class)responseType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *responses; // @synthesize responses=_responses;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)responseAtIndex:(unsigned long long)arg1;
- (unsigned long long)responsesCount;
- (void)addResponse:(id)arg1;
- (void)clearResponses;

@end

