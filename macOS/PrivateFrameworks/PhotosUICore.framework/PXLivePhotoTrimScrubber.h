//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXView.h>

@class AVAsset, AVVideoComposition, NSArray, NSImage, PXLivePhotoTrimScrubberHiddenAnimationHelper, PXLivePhotoTrimScrubberLoupeView, PXLivePhotoTrimScrubberSpec, PXTrimScrubberLayoutHelper, UXImageView;
@protocol PXLivePhotoTrimScrubberDelegate, PXLivePhotoTrimScrubberFilmStripView;

@interface PXLivePhotoTrimScrubber : UXView
{
    PXLivePhotoTrimScrubberLoupeView *_photoLoupe;
    UXView *_filmstripContainerView;
    UXView<PXLivePhotoTrimScrubberFilmStripView> *_filmstripView;
    UXView *_disabledOverlayView;
    struct {
        char respondsToDidTapElement;
        char respondsToDidBeginInteractivelyEditingElement;
        char respondsToCanBeginInteractivelyEditingElement;
        char respondsToDidEndInteractivelyEditingElement;
        char respondsToDidChangeTimeForElement;
        char respondsToAssetDurationDidChange;
        char respondsToDidChangeLoupeRect;
        char respondsToDidZoomToMinimumValueMaximumValue;
        char respondsToDidUnzoom;
        char respondsToDidLayoutSubviews;
        char respondsToDebugStartRect;
        char respondsToDebugEndRect;
        char respondsToDebugStartOffset;
        char respondsToDebugEndOffset;
    } _delegateFlags;
    NSArray *_keyTimeSnappingControllers;
    NSArray *_startTimeSnappingControllers;
    NSArray *_endTimeSnappingControllers;
    BOOL _hasPresentedControls;
    CDStruct_1b6d18a9 _photoTrimBuffer;
    long long _changeDepth;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_loupeHiddenHelper;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_trimControlHiddenHelper;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_playheadHiddenHelper;
    UXView *_debugStartTimeView;
    UXView *_debugLoupeTimeView;
    UXView *_debugEndTimeView;
    BOOL _canEditKeyTime;
    BOOL _playheadEnabled;
    BOOL _disabled;
    BOOL _useMiniScrubber;
    BOOL _allowZoom;
    BOOL _showVideoScrubberDebugOverlay;
    UXView *_preTrimOverlayView;
    UXView *_postTrimOverlayView;
    PXLivePhotoTrimScrubberSpec *_spec;
    Class _filmStripViewClass;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    NSImage *_placeholderImage;
    double _horizontalInset;
    NSArray *_snapKeyTimes;
    NSArray *_snapTrimStartTimes;
    NSArray *_snapTrimEndTimes;
    id <PXLivePhotoTrimScrubberDelegate> _delegate;
    double __contentAspectRatio;
    long long __trackingElement;
    long long _state;
    PXTrimScrubberLayoutHelper *_layoutHelper;
    UXImageView *_trimStartHandle;
    UXImageView *_trimEndHandle;
    UXImageView *_playhead;
    CDStruct_1b6d18a9 _untrimmedDuration;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_1b6d18a9 _playheadTime;
    CDStruct_1b6d18a9 _suggestedKeyTime;
    CDStruct_1b6d18a9 _trimStartTime;
    CDStruct_1b6d18a9 _trimEndTime;
    CDStruct_1b6d18a9 _originalStartTime;
    CDStruct_1b6d18a9 _originalEndTime;
    CDStruct_1b6d18a9 _minimumTrimLength;
}

+ (id)playheadImageMini;
+ (id)playheadImage;
+ (id)trimEndHighlightedImageMini;
+ (id)trimEndImageMini;
+ (id)trimStartHighlightedImageMini;
+ (id)trimStartImageMini;
+ (id)trimEndHighlightedImage;
+ (id)trimStartHighlightedImage;
+ (id)trimEndImage;
+ (id)trimStartImage;
+ (id)createSnappingControllerWithSnappingTarget:(double)arg1;
+ (id)_createSnappingControllersForKeytimes:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 minimumTrimLength; // @synthesize minimumTrimLength=_minimumTrimLength;
@property(nonatomic) BOOL showVideoScrubberDebugOverlay; // @synthesize showVideoScrubberDebugOverlay=_showVideoScrubberDebugOverlay;
@property(readonly, nonatomic) UXImageView *playhead; // @synthesize playhead=_playhead;
@property(readonly, nonatomic) UXImageView *trimEndHandle; // @synthesize trimEndHandle=_trimEndHandle;
@property(readonly, nonatomic) UXImageView *trimStartHandle; // @synthesize trimStartHandle=_trimStartHandle;
@property(retain, nonatomic) PXTrimScrubberLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, setter=_setTrackingElement:) long long _trackingElement; // @synthesize _trackingElement=__trackingElement;
@property(nonatomic, setter=_setContentAspectRatio:) double _contentAspectRatio; // @synthesize _contentAspectRatio=__contentAspectRatio;
@property(nonatomic) BOOL allowZoom; // @synthesize allowZoom=_allowZoom;
@property(nonatomic) BOOL useMiniScrubber; // @synthesize useMiniScrubber=_useMiniScrubber;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <PXLivePhotoTrimScrubberDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_1b6d18a9 originalEndTime; // @synthesize originalEndTime=_originalEndTime;
@property(nonatomic) CDStruct_1b6d18a9 originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(nonatomic) CDStruct_1b6d18a9 trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(nonatomic) CDStruct_1b6d18a9 trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(nonatomic) CDStruct_1b6d18a9 suggestedKeyTime; // @synthesize suggestedKeyTime=_suggestedKeyTime;
@property(copy, nonatomic) NSArray *snapTrimEndTimes; // @synthesize snapTrimEndTimes=_snapTrimEndTimes;
@property(copy, nonatomic) NSArray *snapTrimStartTimes; // @synthesize snapTrimStartTimes=_snapTrimStartTimes;
@property(copy, nonatomic) NSArray *snapKeyTimes; // @synthesize snapKeyTimes=_snapKeyTimes;
@property(nonatomic) BOOL playheadEnabled; // @synthesize playheadEnabled=_playheadEnabled;
@property(nonatomic) CDStruct_1b6d18a9 playheadTime; // @synthesize playheadTime=_playheadTime;
@property(nonatomic) BOOL canEditKeyTime; // @synthesize canEditKeyTime=_canEditKeyTime;
@property(nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic, setter=_setUntrimmedDuration:) CDStruct_1b6d18a9 untrimmedDuration; // @synthesize untrimmedDuration=_untrimmedDuration;
@property(retain, nonatomic) NSImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) Class filmStripViewClass; // @synthesize filmStripViewClass=_filmStripViewClass;
@property(retain, nonatomic) PXLivePhotoTrimScrubberSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) UXView *_postTrimOverlayView; // @synthesize _postTrimOverlayView;
@property(readonly, nonatomic) UXView *_preTrimOverlayView; // @synthesize _preTrimOverlayView;
@property(readonly, nonatomic) UXView *photoLoupe; // @synthesize photoLoupe=_photoLoupe;
- (void)impactOccured;
- (void)prepareForImpact;
- (struct CGRect)backingAlignedRectForRect:(struct CGRect)arg1;
- (void)_releaseAVObjects;
- (struct CGRect)_disabledOverlayFrame;
- (void)_trimHandleDidReachBounds;
- (void)_presentControlsIfNeeded;
- (void)_setPlayheadHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setTrimControlsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setPhotoLoupeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_snapTimesForElement:(long long)arg1;
- (id)_snappingControllersForElement:(long long)arg1;
- (void)_updateEndTimeSnappingControllers;
- (void)_updateStartTimeSnappingControllers;
- (void)_updateKeyTimeSnappingControllers;
- (void)_updateContentAspectRatio;
- (void)_assetDidLoadValues;
- (void)handleEndTracking:(BOOL)arg1;
- (void)handleChangeTrackingAtLocation:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (CDStruct_1b6d18a9)_clampTimeToViewportIfZoomed:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 viewportMaxTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 viewportMinTime;
- (void)handleBeginTrackingAtLocation:(struct CGPoint)arg1;
- (void)handleTapWithElement:(long long)arg1;
- (void)handleSetKeyTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_timeAtLocation:(struct CGPoint)arg1 forElement:(long long)arg2;
- (CDStruct_1b6d18a9)timeAtPoint:(struct CGPoint)arg1;
- (double)_offsetForTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateSpecDependentUI;
- (void)_PXLivePhotoTrimScrubber_commonInit;
- (void)_handleTimerFireEvent;
- (void)_handleLiftEvent;
- (void)_handlePanningEvent;
- (void)_handleFirstPanEvent;
- (void)_zoomAtTime:(CDStruct_1b6d18a9)arg1;
- (void)_zoomAtTrackedElement;
- (void)unzoom;
- (BOOL)tryZoomAtTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) struct CGRect loupeRect;
@property(readonly, nonatomic) long long currentlyInteractingElement;
@property(readonly, nonatomic, getter=isAssetDurationLoaded) BOOL assetDurationLoaded;
- (double)horizontalOffsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForElement:(long long)arg1;
@property(readonly, nonatomic) long long trimStatus;
- (void)performAnimatedChanges:(CDUnknownBlockType)arg1;
- (void)_animateChanges:(CDUnknownBlockType)arg1;
- (void)_updatePlayhead;
- (void)_updateTrimHandles;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1 canHaveImpact:(BOOL)arg2;
- (void)_setKeyTime:(CDStruct_1b6d18a9)arg1 canHaveImpact:(BOOL)arg2;
@property(retain, nonatomic) UXView *loupePlayerView;
- (void)layoutSubviews;
- (void)_newScrubberLayoutSubviews;
- (id)initWithFilmStripViewClass:(Class)arg1 spec:(id)arg2;

@end

