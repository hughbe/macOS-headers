//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <PencilKit/CAAnimationDelegate-Protocol.h>

@class NSImage, NSString, PKMacLinedPaperView;

@interface PKTextAttachmentDrawingViewTile : NSView <CAAnimationDelegate>
{
    BOOL _topTile;
    BOOL _bottomTile;
    BOOL _scheduled;
    BOOL _valid;
    NSImage *_image;
    PKMacLinedPaperView *_linedPaperView;
    struct CGRect _drawingFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKMacLinedPaperView *linedPaperView; // @synthesize linedPaperView=_linedPaperView;
@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) struct CGRect drawingFrame; // @synthesize drawingFrame=_drawingFrame;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL scheduled; // @synthesize scheduled=_scheduled;
@property(nonatomic) BOOL bottomTile; // @synthesize bottomTile=_bottomTile;
@property(nonatomic) BOOL topTile; // @synthesize topTile=_topTile;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)setTemporaryImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 drawingFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

