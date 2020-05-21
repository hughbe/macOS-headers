//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString, TPPBDictionaryMatchingRule;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying>
{
    TPPBDictionaryMatchingRule *_matchingRule;
    NSString *_view;
}

+ (id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *view; // @synthesize view=_view;
@property(retain, nonatomic) TPPBDictionaryMatchingRule *matchingRule; // @synthesize matchingRule=_matchingRule;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasView;
@property(readonly, nonatomic) BOOL hasMatchingRule;

@end

