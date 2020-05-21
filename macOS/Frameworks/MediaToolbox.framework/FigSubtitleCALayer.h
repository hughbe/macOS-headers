//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaToolbox/FigSubtitleBackdropCALayer.h>

#import <MediaToolbox/CALayerDelegate-Protocol.h>

@class NSString;

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate>
{
    struct OpaqueFigSubtitleCALayerInternal *layerInternal;
}

+ (id)defaultActionForKey:(id)arg1;
- (void)removeAnimationsForKey:(id)arg1;
- (void)addAnimations:(id)arg1 forKey:(id)arg2;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setVideosize:(struct CGSize)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (void)setPlayer:(struct OpaqueFigPlayer *)arg1;
@property(copy, nonatomic) NSString *captionRenderingStrategy;
- (void)handleNeedsLayoutNotification;
- (void)_addPositionAnimation:(id)arg1 forKey:(id)arg2;
- (void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (id)actionForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

