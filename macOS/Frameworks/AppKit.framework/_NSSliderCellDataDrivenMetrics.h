//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSSliderCellMetricsStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSSliderCellDataDrivenMetrics : NSObject <NSSliderCellMetricsStrategy>
{
    CDStruct_c9beae75 _state;
}

@property CDStruct_c9beae75 state; // @synthesize state=_state;
- (struct CGRect)rectOfMaxValueImageFlipped:(BOOL)arg1;
- (struct CGRect)rectOfMinValueImageFlipped:(BOOL)arg1;
- (struct CGRect)rectOfTickMarkForValue:(double)arg1 knobRect:(struct CGRect)arg2 barRect:(struct CGRect)arg3;
- (struct NSEdgeInsets)knobAlignmentRectInsets;
- (struct CGRect)knobRectFlipped:(BOOL)arg1 value:(double)arg2 knobValueRangeRect:(struct CGRect)arg3;
- (struct CGRect)knobValueRangeRect:(BOOL)arg1;
- (struct CGRect)barRectFlipped:(BOOL)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

