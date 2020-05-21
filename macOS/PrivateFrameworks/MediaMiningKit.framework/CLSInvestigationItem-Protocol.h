//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSSimilarlyStackableItem-Protocol.h>
#import <MediaMiningKit/NSObject-Protocol.h>
#import <MediaMiningKit/PLRegionsClusteringItem-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString, VNSceneprint;
@protocol CLSItemScoringContext;

@protocol CLSInvestigationItem <NSObject, PLRegionsClusteringItem, CLSSimilarlyStackableItem>
+ (id <CLSItemScoringContext>)contextForItems:(NSArray *)arg1;
@property(readonly) BOOL clsHasInterestingScenes;
@property(readonly) BOOL clsHasPoorResolution;
@property(readonly) BOOL clsAvoidIfPossibleForKeyItem;
@property(readonly) BOOL clsIsInhabited;
@property(readonly, nonatomic) NSDate *cls_localDate;
@property(readonly, nonatomic) NSDate *cls_universalDate;
@property(readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property(readonly, nonatomic) VNSceneprint *clsSceneprint;
@property(readonly, nonatomic) NSData *clsDistanceIdentity;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
@property(readonly, nonatomic) BOOL clsIsInterestingReframe;
@property(readonly, nonatomic) double clsDuration;
@property(readonly, nonatomic) BOOL clsIsNonMemorable;
@property(readonly, nonatomic) BOOL clsHasCustomPlaybackVariation;
@property(readonly, nonatomic) BOOL clsHasInterestingAudioClassification;
@property(readonly, nonatomic) BOOL clsIsInterestingHDR;
@property(readonly, nonatomic) BOOL clsIsInterestingSDOF;
@property(readonly, nonatomic) BOOL clsIsInterestingPanorama;
@property(readonly, nonatomic) BOOL clsIsInterestingLivePhoto;
@property(readonly, nonatomic) BOOL clsIsInterestingVideo;
@property(readonly, nonatomic) BOOL clsIsLongExposure;
@property(readonly, nonatomic) BOOL clsIsLoopOrBounce;
@property(readonly, nonatomic) BOOL isBlurry;
@property(readonly, nonatomic) BOOL clsIsAestheticallyPrettyGood;
@property(readonly, nonatomic) BOOL isVideo;
@property(readonly, nonatomic) BOOL isFavorite;
@property(readonly, nonatomic) BOOL isScreenshotOrScreenRecording;
@property(readonly, nonatomic) BOOL isUtility;
@property(readonly, nonatomic) double clsFaceScore;
@property(readonly, nonatomic) double clsAutoplaySuggestionScore;
@property(readonly, nonatomic) double clsHighlightVisibilityScore;
@property(readonly, nonatomic) double clsAestheticScore;
@property(readonly, nonatomic) double clsSharpnessScore;
@property(readonly, nonatomic) double clsExposureScore;
@property(readonly, nonatomic) double clsContentScore;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
@property(readonly, nonatomic) NSArray *peopleNames;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSString *clsIdentifier;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames;
@property(readonly, nonatomic) NSArray *clsPeopleNames;
@property(readonly, nonatomic) CLLocation *clsLocation;
- (double)scoreWithContext:(id <CLSItemScoringContext>)arg1;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3;
@end

