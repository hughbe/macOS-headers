//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSObject;
@protocol FigNeroLayerDelegate, OS_dispatch_queue;

@interface FigNeroLayer : CALayer
{
    NSObject<OS_dispatch_queue> *_neroQueue;
    struct OpaqueFigNeroid *_neroid;
    id <FigNeroLayerDelegate> _neroDelegate;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)stop;
- (void)_start;
- (void)start;
@property(nonatomic) id <FigNeroLayerDelegate> neroDelegate;
- (void)dealloc;
- (id)init;
- (void)_dispatchNotification:(id)arg1 value:(id)arg2;

@end

