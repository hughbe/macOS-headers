//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _PAREntity, _PARResult_Template;

@protocol _PARResult <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *completedQuery;
@property(copy, nonatomic) NSString *correctedQuery;
@property(copy, nonatomic) NSString *intendedQuery;
@property(retain, nonatomic) _PARResult_Template *template;
@property(copy, nonatomic) NSString *adamId;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSString *sectionBundleId;
@property(copy, nonatomic) NSString *appleReferrer;
@property(nonatomic) int minimumRankOfTopHitToSuppressResult;
@property(nonatomic) BOOL isQuickGlance;
@property(nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory;
@property(nonatomic) int placement;
@property(nonatomic) int queryIndependentEngagementScore;
@property(nonatomic) int engagementScore;
@property(nonatomic) int topHit;
@property(copy, nonatomic) NSArray *entities;
@property(nonatomic) float serverScore;
@property(nonatomic) int maxAgeSeconds;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSData *feedback;
@property(nonatomic) float score;
@property(copy, nonatomic) NSString *dataServiceId;
@property(copy, nonatomic) NSString *canonicalId;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *type;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_PAREntity *)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (void)addEntities:(_PAREntity *)arg1;
- (void)clearEntities;
@end

