//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSUndoManager;

@interface ACSHView : NSView
{
    unsigned long long _order;
}

@property(nonatomic) unsigned long long order; // @synthesize order=_order;
- (void)dealloc;
- (void)resumeTracking;
- (void)suspendTracking;
@property(readonly, nonatomic) double scaleFactorToDrawAt;
- (void)clearImageCache;
- (void)addSubview:(id)arg1;
- (void)updateDepthBasedInformation;
@property(readonly, nonatomic) NSUndoManager *undoManager;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initView;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;

@end

