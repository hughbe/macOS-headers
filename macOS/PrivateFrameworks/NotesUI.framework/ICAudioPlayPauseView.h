//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <NotesUI/ICMZoomableAttachmentView-Protocol.h>

@class AVAsset, CALayer, ICAttachment, ICMZoomController, ICNoteEditorIconImageView, NSString;

@interface ICAudioPlayPauseView : NSView <ICMZoomableAttachmentView>
{
    ICAttachment *_audioAttachment;
    ICMZoomController *_zoomController;
    CALayer *_backgroundLayer;
    ICNoteEditorIconImageView *_playView;
    ICNoteEditorIconImageView *_pauseView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICNoteEditorIconImageView *pauseView; // @synthesize pauseView=_pauseView;
@property(retain, nonatomic) ICNoteEditorIconImageView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) ICMZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(retain, nonatomic) ICAttachment *audioAttachment; // @synthesize audioAttachment=_audioAttachment;
- (id)foregroundStrokeColor;
- (void)hostViewDidZoom:(id)arg1;
- (void)didPlayToEndNotification:(id)arg1;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
- (void)audioPlaybackStopNotification:(id)arg1;
- (void)audioPlaybackPauseNotification:(id)arg1;
- (void)audioPlaybackPlayNotification:(id)arg1;
- (void)showPressed:(BOOL)arg1;
- (void)updateTime:(double)arg1 duration:(double)arg2;
- (void)showStopped;
- (void)showPaused;
- (void)showPlaying;
- (void)audioDidChange;
- (void)audioWillChange;
- (void)setImageNamed:(id)arg1 onLayer:(id)arg2 adjustLayerSize:(BOOL)arg3;
- (BOOL)isOpaque;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)clickGesture:(id)arg1;
- (struct CGSize)fittingSize;
- (struct CGSize)intrinsicContentSize;
- (void)viewDidChangeBackingProperties;
- (void)createPlayPauseViews;
- (id)addSubImageViewForImage:(id)arg1;
- (void)createBackgroundLayer;
- (void)sharedInit;
- (void)togglePlayPause;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) BOOL isPlaying;
@property(readonly, nonatomic) AVAsset *audio;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

