//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, _NSTextFinderImpl;

__attribute__((visibility("hidden")))
@interface _NSFindIndicatorOverlayView : NSView
{
    _NSTextFinderImpl *_textFinderImpl;
    NSArray *_holes;
    BOOL _flipped;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)_holes;
- (void)_updateHoles;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithTextFinderImpl:(id)arg1 flipped:(BOOL)arg2;

@end

