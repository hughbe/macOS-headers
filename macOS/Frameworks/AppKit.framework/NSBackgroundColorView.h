//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface NSBackgroundColorView : NSView
{
    NSColor *_backgroundColor;
}

- (int)_trackingAreasDirty;
- (void)_setTrackingAreasDirty:(int)arg1;
- (id)_preferredAppearance;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
@property(copy) NSColor *backgroundColor;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

