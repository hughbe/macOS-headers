//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface BU_TTimelineOverlay : CALayer
{
    struct TTimelineControl *_timelineControl;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andControl:(struct TTimelineControl *)arg2;

@end

