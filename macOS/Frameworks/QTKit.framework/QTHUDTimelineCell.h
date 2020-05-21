//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QTKit/QTHUDSliderCell.h>

@interface QTHUDTimelineCell : QTHUDSliderCell
{
    struct QTHUDTimelineCellInternal *_internal;
}

+ (void)initialize;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)takeQTTimeValueFrom:(id)arg1;
- (void)setQTTimeValue:(CDStruct_2ec95fd7)arg1;
- (CDStruct_2ec95fd7)QTTimeValue;
- (struct CGPoint)pointAtTime:(CDStruct_2ec95fd7)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (CDStruct_2ec95fd7)timeAtPoint:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)setTimeRange:(CDStruct_7cbd8c8b)arg1;
- (CDStruct_7cbd8c8b)timeRange;
- (void)setHighlightedTimeRanges:(id)arg1;
- (id)highlightedTimeRanges;
- (id)_QTHUDSliderHighlightedRanges;
- (double)_QTHUDSliderValidateUserValue:(double)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (id)exposedBindings;

@end

