//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface FI_TScopeBarStackView : NSStackView
{
    NSView *_viewToSwapIn;
    NSView *_viewToSwapOut;
}

- (void).cxx_destruct;
@property(retain) NSView *viewToSwapOut; // @synthesize viewToSwapOut=_viewToSwapOut;
@property(retain) NSView *viewToSwapIn; // @synthesize viewToSwapIn=_viewToSwapIn;
- (void)layout;

@end

