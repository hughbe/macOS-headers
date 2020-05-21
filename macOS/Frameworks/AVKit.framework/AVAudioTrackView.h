//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVTrackView.h>

@class AVObservationController, AVWaveformLayer;

__attribute__((visibility("hidden")))
@interface AVAudioTrackView : AVTrackView
{
    AVObservationController *_observationController;
    AVWaveformLayer *_waveformLayer;
}

- (void).cxx_destruct;
- (void)_setupWaveformLayer;
- (void)_updateWaveformIfNeeded;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidEndLiveResize;
- (id)makeBackingLayer;
- (void)layout;
- (void)dealloc;
- (id)init;

@end

