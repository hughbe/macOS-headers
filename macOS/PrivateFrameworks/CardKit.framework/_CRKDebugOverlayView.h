//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/_CRKHitTestPassThroughView.h>

@class NSColor, NSString;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView
{
    NSColor *_color;
    NSString *_debugText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *debugText; // @synthesize debugText=_debugText;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

