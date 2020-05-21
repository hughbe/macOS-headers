//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject
{
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;
- (id)_postProcessingVideoLayers;
- (id)_postProcessingRootLayer;
- (BOOL)_hasPostProcessingLayers;
- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (void)dealloc;
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3;

@end

