//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface PMInkBarView : NSView
{
    NSColor *color;
    float level;
    float threshhold;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 level:(float)arg3 low:(float)arg4;

@end

