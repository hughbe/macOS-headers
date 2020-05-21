//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer
{
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)arg1;
- (void)_didChangeRenderingStatus:(id)arg1;
- (void)_sendVideoLayerDisplayChangedNotification;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)notificationBarrier;
- (unsigned int)layerDisplayID;
- (BOOL)isVideoLayerBeingServiced;
- (void)layerDidChangeDisplay:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

