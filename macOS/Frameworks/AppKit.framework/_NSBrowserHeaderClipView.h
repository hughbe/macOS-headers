//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSClipView.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface _NSBrowserHeaderClipView : NSClipView
{
    NSView *_headerView;
}

@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
- (void)_selfBoundsChanged;
- (void)_handleFrameChangeForSubview:(id)arg1;
- (struct CGRect)_currentDocViewFrame;
- (void)_pinDocRect;
- (void)dealloc;

@end

