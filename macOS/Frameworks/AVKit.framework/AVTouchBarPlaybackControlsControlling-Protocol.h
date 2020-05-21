//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVTouchBarMediaSelectionOption, AVValueTiming, NSArray, NSURL;

@protocol AVTouchBarPlaybackControlsControlling <NSObject>
@property(readonly) BOOL hasEnabledVideo;
@property(readonly) BOOL hasEnabledAudio;
@property(readonly) double seekToTime;
@property(readonly, getter=isSeeking) BOOL seeking;
@property(readonly) AVValueTiming *timing;
@property(readonly) double contentDuration;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;

@optional
@property(readonly) NSURL *assetURL;
@property(readonly) BOOL canBeginTouchBarScrubbing;
@property(retain) AVTouchBarMediaSelectionOption *currentLegibleTouchBarMediaSelectionOption;
@property(readonly) NSArray *legibleTouchBarMediaSelectionOptions;
@property(retain) AVTouchBarMediaSelectionOption *currentAudioTouchBarMediaSelectionOption;
@property(readonly) NSArray *audioTouchBarMediaSelectionOptions;
@property(readonly) NSArray *seekableTimeRanges;
@property(readonly) BOOL canTogglePictureInPicture;
@property(getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property(readonly) BOOL allowsPictureInPicturePlayback;
@property(readonly) BOOL canTogglePlayback;
@property(getter=isPlaying) BOOL playing;
- (void)controlsViewDidDisappear;
- (void)controlsViewWillAppear;
- (void)cancelThumbnailGeneration;
- (void)generateTouchBarThumbnailsForTimes:(NSArray *)arg1 tolerance:(double)arg2 size:(struct CGSize)arg3 thumbnailHandler:(void (^)(NSArray *, BOOL))arg4;
- (void)endTouchBarScrubbing;
- (void)beginTouchBarScrubbing;
- (void)togglePictureInPicture;
- (void)togglePlayback;
@end

