//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrollerImp.h>

__attribute__((visibility("hidden")))
@interface NSLegacyScrollerImp : NSScrollerImp
{
}

- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)_rolloverTrackingRect;
- (void)removeTrackingAreas;
- (void)updateTrackingAreas;
- (void)drawKnobWithAlpha:(double)arg1;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2 alpha:(double)arg3;
- (struct __CFDictionary *)copyCoreUIOptions;
- (double)knobEndInset;
- (double)trackSideInset;
- (void)setTrackAlpha:(double)arg1;
- (void)setKnobAlpha:(double)arg1;
- (long long)scrollerStyle;
- (void)dealloc;

@end

