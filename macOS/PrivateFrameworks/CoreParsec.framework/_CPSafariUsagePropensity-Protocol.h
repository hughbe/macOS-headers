//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPSafariUsagePropensity <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int totalEngagements;
@property(nonatomic) float other;
@property(nonatomic) float goToSite;
@property(nonatomic) float thirdPartyCompletionOrRecentSearch;
@property(nonatomic) float thirdPartyTap;
@property(nonatomic) float thirdPartyGoto;
@property(nonatomic) float parsecTap;
@property(nonatomic) float parsecGoto;
@property(nonatomic) float localTap;
@property(nonatomic) float localGoto;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

