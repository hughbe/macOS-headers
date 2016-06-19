//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class CABasicAnimation, CAKeyframeAnimation, NSWindow;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsWindowTransformAnimation : NSAnimation
{
    NSWindow *_window;
    struct CGRect _startFrame;
    struct CGRect _targetFrame;
    CABasicAnimation *_frameAnimation;
    struct CGPoint _startTranslate;
    struct CGPoint _targetTranslate;
    CABasicAnimation *_translateAnimation;
    struct CGSize _startScale;
    struct CGSize _targetScale;
    CAKeyframeAnimation *_scaleAnimation;
    struct CGSize _startSize;
    struct CGSize _targetSize;
    CABasicAnimation *_sizeAnimation;
    BOOL _hop;
    CDUnknownBlockType _completionHandler;
    double _fadeOutDuration;
    BOOL _prefersWindowTransform;
}

+ (void)resetTransformForWindow:(id)arg1;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)_didStopAnimation:(BOOL)arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (void)_willStartAnimation;
- (BOOL)_resizesWindow;
- (double)alphaValueForProgress:(double)arg1;
- (struct CGRect)frameForProgress:(double)arg1;
- (struct CGSize)sizeForProgress:(double)arg1;
- (struct CGSize)scaleForProgress:(double)arg1;
- (struct CGPoint)translationForProgress:(double)arg1;
- (id)valueForKey:(id)arg1 animation:(id)arg2 progress:(double)arg3;
- (struct CGPoint)anchorPoint;
- (void)setAnimationCurve:(unsigned long long)arg1;
- (void)setPrefersWindowTransform:(BOOL)arg1;
- (void)setStartFadeOutAtProgress:(double)arg1;
- (id)window;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 startFrame:(struct CGRect)arg2 targetFrame:(struct CGRect)arg3;
- (id)initWithWindow:(id)arg1 startFrame:(struct CGRect)arg2 targetFrame:(struct CGRect)arg3 hop:(BOOL)arg4;
- (id)initWithWindow:(id)arg1 startFrame:(struct CGRect)arg2 targetFrame:(struct CGRect)arg3 startSize:(struct CGSize)arg4 targetSize:(struct CGSize)arg5 hop:(BOOL)arg6;
- (void)_buildWindowTransformAnimations;
- (void)_setTimingFunctionsForAnimationCurve:(unsigned long long)arg1;
- (id)keyFramesForAnimationWithSteps:(unsigned long long)arg1 evaluator:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_createScaleFunctionForStartScale:(double)arg1 endScale:(double)arg2 peakScale:(double)arg3;
- (id)_screen;

@end

