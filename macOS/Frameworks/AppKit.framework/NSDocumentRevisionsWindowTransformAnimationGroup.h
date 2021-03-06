//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsWindowTransformAnimationGroup : NSAnimation
{
    NSArray *_animations;
    BOOL _resizesWindow;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (void)dealloc;
- (id)initWithAnimations:(id)arg1;
- (id)_screen;

@end

