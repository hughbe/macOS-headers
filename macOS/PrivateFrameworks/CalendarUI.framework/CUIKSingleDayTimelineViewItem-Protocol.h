//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class EKEvent, NSDate;

@protocol CUIKSingleDayTimelineViewItem <NSObject>
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
@property(readonly) BOOL visibleHeightLocked;
@property struct CGRect unPinnedViewFrame;
@property(readonly, nonatomic) EKEvent *event;
@property(readonly, nonatomic) double viewMaxNaturalTextHeight;
@property(readonly, nonatomic) double enoughHeightForOneLine;
@property(readonly, nonatomic) BOOL hideTravelTime;
@property(readonly, nonatomic) NSDate *end;
@property(readonly, nonatomic) NSDate *start;
@property(readonly, nonatomic) NSDate *startWithTravelTime;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setVisibleHeight:(double)arg1;
- (struct CGRect)stagedFrame;
- (void)setStagedFrame:(struct CGRect)arg1;
@end

