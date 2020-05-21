//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPImagesUsagePropensity-Protocol.h>

@class NSData, NSString;

@interface _CPImagesUsagePropensity : PBCodable <_CPImagesUsagePropensity, NSSecureCoding>
{
    float _zkw;
    float _recentResult;
    float _other;
    float _querySuggestion;
    float _image;
    int _totalEngagements;
}

@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float image; // @synthesize image=_image;
@property(nonatomic) float querySuggestion; // @synthesize querySuggestion=_querySuggestion;
@property(nonatomic) float other; // @synthesize other=_other;
@property(nonatomic) float recentResult; // @synthesize recentResult=_recentResult;
@property(nonatomic) float zkw; // @synthesize zkw=_zkw;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

