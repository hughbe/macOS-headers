//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface _UXSinglePixelLine : NSView
{
    NSColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToSuperview;
- (void)updateHeight;

@end

