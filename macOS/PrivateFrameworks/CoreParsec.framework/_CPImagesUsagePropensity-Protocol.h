//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPImagesUsagePropensity <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int totalEngagements;
@property(nonatomic) float image;
@property(nonatomic) float querySuggestion;
@property(nonatomic) float other;
@property(nonatomic) float recentResult;
@property(nonatomic) float zkw;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

