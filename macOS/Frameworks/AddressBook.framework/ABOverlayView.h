//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@interface ABOverlayView : NSView
{
    NSView *_overlaidView;
}

@property(retain) NSView *overlaidView; // @synthesize overlaidView=_overlaidView;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isOverlayDrawingNeeded;
- (void)drawRect:(struct CGRect)arg1;
- (id)constraintsAttachingOverlayToOverlaidView;
- (id)effectiveOverlaidView;
- (void)dealloc;

@end

