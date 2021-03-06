//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString, NSToolTip;

__attribute__((visibility("hidden")))
@interface NSCustomToolTipDrawView : NSView
{
    NSToolTip *_toolTipObject;
    NSAttributedString *_attributedString;
    struct CGSize _margin;
}

@property struct CGSize margin; // @synthesize margin=_margin;
@property(copy) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain) NSToolTip *toolTipObject; // @synthesize toolTipObject=_toolTipObject;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)dealloc;

@end

