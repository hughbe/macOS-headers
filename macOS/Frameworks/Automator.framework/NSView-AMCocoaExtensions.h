//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class AMActionView;

@interface NSView (AMCocoaExtensions)
- (void)am_constrainToSuperviewWithInset:(double)arg1;
- (void)am_constrainToSuperview;
- (BOOL)satisfiesOrHasRecursiveSubviewSatisfyingBlock:(CDUnknownBlockType)arg1;
- (void)performBlockForSelfAndRecursiveSubviews:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) AMActionView *enclosingActionView;

// Remaining properties
@property(getter=isFlipped) BOOL flipped; // @dynamic flipped;
@end

