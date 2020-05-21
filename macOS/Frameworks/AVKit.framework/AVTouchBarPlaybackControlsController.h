//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVTimeControlling-Protocol.h>
#import <AVKit/AVTouchBarMediaSelectionControlling-Protocol.h>
#import <AVKit/AVTouchBarPlaybackControlsControllingInternal-Protocol.h>
#import <AVKit/AVTouchBarScrubberControlling-Protocol.h>
#import <AVKit/AVTouchBarTrackControlling-Protocol.h>

@class AVAssetTrack, AVThumbnailGenerator, AVTouchBarMediaSelectionOption, AVValueTiming, AVWaveform, NSArray, NSString, NSURL;
@protocol AVTouchBarPlaybackControlsControlling;

__attribute__((visibility("hidden")))
@interface AVTouchBarPlaybackControlsController : NSObject <AVTouchBarMediaSelectionControlling, AVTouchBarPlaybackControlsControllingInternal, AVTouchBarScrubberControlling, AVTouchBarTrackControlling, AVTimeControlling>
{
    id <AVTouchBarPlaybackControlsControlling> _externalTouchBarPlaybackControlsController;
    struct {
        char _isPlaying;
        char _setPlaying;
        char _canTogglePlayback;
        char _togglePlayback;
        char _allowsPictureInPicturePlayback;
        char _isPictureInPictureActive;
        char _setPictureInPictureActive;
        char _canTogglePictureInPicture;
        char _togglePictureInPicture;
        char _seekableTimeRanges;
        char _audioTouchBarMediaSelectionOptions;
        char _currentAudioTouchBarMediaSelectionOption;
        char _setCurrentAudioTouchBarMediaSelectionOption;
        char _legibleTouchBarMediaSelectionOptions;
        char _currentLegibleTouchBarMediaSelectionOption;
        char _setCurrentLegibleTouchBarMediaSelectionOption;
        char _canBeginTouchBarScrubbing;
        char _beginTouchBarScrubbing;
        char _endTouchBarScrubbing;
        char _generateTouchBarThumbnailsForTimesToleranceSizeThumbnailHandler;
        char _cancelThumbnailGeneration;
        char _assetURL;
        char _controlsViewWillAppear;
        char _controlsViewDidDisappear;
    } _externalControllerRespondsTo;
    AVThumbnailGenerator *_thumbnailGenerator;
    NSURL *_currentWaveformURL;
    AVWaveform *_audioWaveform;
    AVAssetTrack *_currentAudioTrack;
}

+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (id)keyPathsForValuesAffectingCanBeginTouchBarScrubbing;
+ (BOOL)automaticallyNotifiesObserversOfCanBeginTouchBarScrubbing;
+ (id)keyPathsForValuesAffectingCanTogglePictureInPicture;
+ (BOOL)automaticallyNotifiesObserversOfCanTogglePictureInPicture;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (BOOL)automaticallyNotifiesObserversOfPictureInPictureActive;
+ (id)keyPathsForValuesAffectingAllowsPictureInPicturePlayback;
+ (BOOL)automaticallyNotifiesObserversOfAllowsPictureInPicturePlayback;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (BOOL)automaticallyNotifiesObserversOfCanTogglePlayback;
+ (id)keyPathsForValuesAffectingPlaying;
+ (BOOL)automaticallyNotifiesObserversOfPlaying;
+ (id)keyPathsForValuesAffectingHasLegibleTouchBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioTouchBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasTouchBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentLegibleTouchBarMediaSelectionOption;
+ (BOOL)automaticallyNotifiesObserversOfCurrentLegibleTouchBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingLegibleTouchBarMediaSelectionOptions;
+ (BOOL)automaticallyNotifiesObserversOfLegibleTouchBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentAudioTouchBarMediaSelectionOption;
+ (BOOL)automaticallyNotifiesObserversOfCurrentAudioTouchBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingAudioTouchBarMediaSelectionOptions;
+ (BOOL)automaticallyNotifiesObserversOfAudioTouchBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingMinTiming;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingSeekToTime;
+ (BOOL)automaticallyNotifiesObserversOfSeekToTime;
+ (id)keyPathsForValuesAffectingSeeking;
+ (BOOL)automaticallyNotifiesObserversOfSeeking;
+ (id)keyPathsForValuesAffectingTiming;
+ (BOOL)automaticallyNotifiesObserversOfTiming;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (BOOL)automaticallyNotifiesObserversOfContentDuration;
- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetTrack *currentAudioTrack; // @synthesize currentAudioTrack=_currentAudioTrack;
@property(retain, nonatomic) AVWaveform *audioWaveform; // @synthesize audioWaveform=_audioWaveform;
- (void)_updateCurrentAudioTrackAndWaveformIfNeeded;
- (void)cancelThumbnailGenerationForRequestType:(long long)arg1;
- (void)generateTouchBarThumbnailsForTimes:(id)arg1 tolerance:(double)arg2 size:(struct CGSize)arg3 requestType:(long long)arg4 thumbnailHandler:(CDUnknownBlockType)arg5;
@property(readonly) BOOL hasEnabledVideo;
@property(readonly) BOOL hasEnabledAudio;
- (void)endTouchBarScrubbing;
- (void)beginTouchBarScrubbing;
@property(readonly) BOOL canBeginTouchBarScrubbing;
- (void)controlsViewDidDisappear;
- (void)controlsViewWillAppear;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
@property(readonly) BOOL hasLiveStreamingContent;
- (void)scanBackward:(id)arg1;
@property(readonly) BOOL canScanBackward;
- (void)scanForward:(id)arg1;
@property(readonly) BOOL canScanForward;
- (void)togglePictureInPicture:(id)arg1;
@property(readonly) BOOL canTogglePictureInPicture;
- (void)setPictureInPictureActive:(BOOL)arg1;
@property(readonly, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property(readonly) BOOL allowsPictureInPicturePlayback;
- (void)togglePlayback:(id)arg1;
@property(readonly) BOOL canTogglePlayback;
@property(getter=isPlaying) BOOL playing;
@property(readonly) BOOL hasLegibleTouchBarMediaSelectionOptions;
@property(readonly) BOOL hasAudioTouchBarMediaSelectionOptions;
@property(readonly) BOOL hasTouchBarMediaSelectionOptions;
@property(retain) AVTouchBarMediaSelectionOption *currentLegibleTouchBarMediaSelectionOption;
@property(readonly) NSArray *legibleTouchBarMediaSelectionOptions;
@property(retain) AVTouchBarMediaSelectionOption *currentAudioTouchBarMediaSelectionOption;
@property(readonly) NSArray *audioTouchBarMediaSelectionOptions;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
@property(readonly) BOOL hasSeekableLiveStreamingContent;
@property(readonly, getter=isCompletelySeekable) BOOL completelySeekable;
@property(readonly) NSArray *seekableTimeRanges;
@property(readonly) AVValueTiming *maxTiming;
@property(readonly) AVValueTiming *minTiming;
@property(readonly) double contentDurationWithinEndTimes;
@property(readonly) double maxTime;
@property(readonly) double minTime;
@property(readonly) double seekToTime;
@property(readonly, getter=isSeeking) BOOL seeking;
@property(readonly) AVValueTiming *timing;
@property(readonly) double contentDuration;
@property __weak id <AVTouchBarPlaybackControlsControlling> externalTouchBarPlaybackControlsController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

