//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/MRLoadable-Protocol.h>
#import <Slideshows/MRRenderable-Protocol.h>

@class MRImage, MRLayer, NSDictionary, NSString;

@interface MRTransition : NSObject <MRLoadable, MRRenderable>
{
    NSDictionary *mDescription;
    id mTransitioner;
    MRLayer *mSourceLayer;
    MRLayer *mTargetLayer;
    MRImage *mSourceLayerImage;
    MRImage *mTargetLayerImage;
    MRImage *mOutputImage;
    NSString *mTransitionID;
    NSString *mPresetID;
    NSDictionary *mAttributes;
    NSDictionary *mFlattenedAttributes;
    BOOL mNeedsToUpdateAttributes;
    struct CGSize mPixelSize;
    BOOL _direction;
    double _progress;
}

+ (id)retainedTransitionWithTransitionID:(id)arg1 forTransitioner:(id)arg2;
@property(nonatomic) BOOL direction; // @synthesize direction=_direction;
@property(readonly) double progress; // @synthesize progress=_progress;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=mPixelSize;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=mAttributes;
@property(copy) NSString *presetID; // @synthesize presetID=mPresetID;
@property(readonly) NSString *transitionID; // @synthesize transitionID=mTransitionID;
@property(retain, nonatomic) MRImage *targetLayerImage; // @synthesize targetLayerImage=mTargetLayerImage;
@property(retain, nonatomic) MRImage *sourceLayerImage; // @synthesize sourceLayerImage=mSourceLayerImage;
@property(retain) MRLayer *targetLayer; // @synthesize targetLayer=mTargetLayer;
@property(retain) MRLayer *sourceLayer; // @synthesize sourceLayer=mSourceLayer;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
@property(readonly, nonatomic) BOOL isInfinite;
@property(readonly, nonatomic) BOOL isAlphaFriendly;
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) BOOL isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4;
- (BOOL)isLoadedForTime:(double)arg1;
@property(readonly) BOOL isSplit;
@property(readonly, nonatomic) BOOL needsTargetLayerImageForPrecomputing;
@property(readonly, nonatomic) BOOL needsSourceLayerImageForPrecomputing;
@property(readonly) BOOL supportsDirectionOverride;
@property(readonly, nonatomic) BOOL controlsLayersTime;
@property(readonly, nonatomic) BOOL noContentsMotion;
- (BOOL)isRetainedByTransitioner;
- (void)releaseByTransitioner:(id)arg1;
- (void)retainByTransitioner:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithTransitionID:(id)arg1;
- (double)pzrCancel:(id)arg1;
- (double)pzrEnd:(id)arg1;
- (double)pzrUpdate:(id)arg1;
- (double)pzrStart:(id)arg1;
- (BOOL)dependsOnFingerPosition;
- (BOOL)isTransitioning;

@end

