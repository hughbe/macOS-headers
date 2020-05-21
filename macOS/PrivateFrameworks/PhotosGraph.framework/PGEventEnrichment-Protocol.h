//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, PGGraphPersonNode, PHAssetCollection;

@protocol PGEventEnrichment <NSObject>
@property(readonly) BOOL isAggregation;
@property(readonly) BOOL isTrip;
@property(readonly) BOOL isShortTrip;
@property(readonly) BOOL isLongTrip;
@property(readonly, nonatomic) NSString *uuid;
- (PHAssetCollection *)fetchAssetCollection;
- (PGGraphPersonNode *)anniversaryPersonNode;
- (PGGraphPersonNode *)birthdayPersonNode;
- (NSArray *)sortedMomentNodes;
- (NSSet *)momentNodes;
- (NSSet *)reliableMeaningLabels;
- (NSSet *)meaningLabels;
@end

