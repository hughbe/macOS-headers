//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAnimateColorBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateTimeBehavior, PDAudioNode, PDCmdBehavior, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDVideoNode;

__attribute__((visibility("hidden")))
@interface PDTimeNodeUnion : NSObject
{
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}

- (void).cxx_destruct;
- (id)description;
- (void)setCmdBehavior:(id)arg1;
- (id)cmdBehavior;
- (void)setBehavior:(id)arg1;
- (id)behavior;
- (void)setSequential:(id)arg1;
- (id)sequential;
- (void)setParallel:(id)arg1;
- (id)parallel;
- (void)setVideo:(id)arg1;
- (id)video;
- (void)setAudio:(id)arg1;
- (id)audio;
- (void)setColorBehavior:(id)arg1;
- (id)colorBehavior;
- (void)setScaleBehavior:(id)arg1;
- (id)scaleBehavior;
- (void)setRotateBehavior:(id)arg1;
- (id)rotateBehavior;
- (void)setMotionBehavior:(id)arg1;
- (id)motionBehavior;
- (void)setEffectBehavior:(id)arg1;
- (id)effectBehavior;
- (void)setTimeBehavior:(id)arg1;
- (id)timeBehavior;
- (id)commonBehavior;
- (id)init;

@end

