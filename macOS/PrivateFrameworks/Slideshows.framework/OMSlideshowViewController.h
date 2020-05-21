//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFNSViewController.h>

#import <Slideshows/MREditingDelegate-Protocol.h>
#import <Slideshows/OKDocumentViewControllerDelegate-Protocol.h>
#import <Slideshows/OKDocumentViewControllerEditingDelegate-Protocol.h>

@class NSString, OKDocumentViewController, OMMarimbaViewController, OMSlideshow;
@protocol OMSlideshowViewControllerPlaybackDelegate, OMSlideshowViewControllerPrepareDelegate;

@interface OMSlideshowViewController : OFNSViewController <MREditingDelegate, OKDocumentViewControllerDelegate, OKDocumentViewControllerEditingDelegate>
{
    OMMarimbaViewController *_marimbaViewController;
    OKDocumentViewController *_opusViewController;
    NSString *_pendingGotoKeyPath;
    NSString *_marimbaStyleID;
    CDUnknownBlockType _pendingGotoCompletionHandler;
    int _isReadyToPlayCounter;
    BOOL _isStretchableWithoutReauthoring;
    struct {
        unsigned int isInEditMode:1;
        unsigned int isInteractive:1;
        unsigned int isReadyToNavigate:1;
        unsigned int isVisible:1;
    } _flags;
    BOOL _logRenderingTimes;
    BOOL _unloadsOnDisappear;
    OMSlideshow *_slideshow;
    double _audioVolume;
    id <OMSlideshowViewControllerPrepareDelegate> _prepareDelegate;
    id <OMSlideshowViewControllerPlaybackDelegate> _playbackDelegate;
}

@property(readonly) BOOL isStretchableWithoutReauthoring; // @synthesize isStretchableWithoutReauthoring=_isStretchableWithoutReauthoring;
@property BOOL unloadsOnDisappear; // @synthesize unloadsOnDisappear=_unloadsOnDisappear;
@property(nonatomic) BOOL logRenderingTimes; // @synthesize logRenderingTimes=_logRenderingTimes;
@property(nonatomic) double audioVolume; // @synthesize audioVolume=_audioVolume;
- (void)marimbaPlaybackIsOver:(id)arg1;
- (void)documentViewController:(id)arg1 didChangeTextForWidget:(id)arg2 toSettings:(id)arg3;
- (void)documentViewController:(id)arg1 changedFrameOfMainNavigatorTo:(struct CGRect)arg2;
- (void)documentViewControllerDidPrepareForDisplay:(id)arg1;
- (void)couchPotatoPlaybackFinished;
- (id)__internalOpusDocumentViewController;
- (id)__internalMarimbaView;
@property(readonly) NSString *renderingLogFilePath;
- (void)determineStretchabilityWithoutReauthoring:(struct CGSize)arg1;
- (void)setIsStretchableWithoutReauthoring:(BOOL)arg1;
@property(nonatomic) BOOL isInteractive;
- (void)endEditingTextElement:(id)arg1 inContainer:(id)arg2;
- (BOOL)beginEditingTextElement:(id)arg1 inContainer:(id)arg2 clickAt:(struct CGPoint)arg3 vertices:(struct CGPoint (*)[4])arg4;
@property(nonatomic) BOOL isInEditMode;
@property(readonly) BOOL isEditable;
- (unsigned long long)authorWithTheme:(id)arg1 mediaURLs:(id)arg2 attributes:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
@property id <OMSlideshowViewControllerPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property id <OMSlideshowViewControllerPrepareDelegate> prepareDelegate; // @synthesize prepareDelegate=_prepareDelegate;
- (void)gotoNextPage:(BOOL)arg1;
- (void)gotoPreviousPage:(BOOL)arg1;
- (void)gotoPoster:(BOOL)arg1;
- (id)synopsisPath;
- (void)gotoItemAtSynopsisPath:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pause;
- (void)play;
- (void)warmupAndPlay;
@property(readonly) BOOL isPlaying;
@property(readonly) struct CGRect cleanAperture;
- (void)_applySlideshow;
@property(retain) OMSlideshow *slideshow; // @synthesize slideshow=_slideshow;
- (void)loadView;
- (BOOL)acceptsFirstResponder;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_slideshowFinishedUpdating;
- (void)_slideshowStartedToUpdate;
- (void)dealloc;
- (id)initWithSlideshow:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

