//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEOCelestialRiseTransitSet : NSObject
{
    double _julianDay;
    struct CAARiseTransitSetDetails _riseTransitSet;
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet; // @synthesize riseTransitSet=_riseTransitSet;
@property(readonly, nonatomic) double julianDay; // @synthesize julianDay=_julianDay;
- (id)description;
- (double)_oldestEventInJulianDay;
- (int)_numberOfEvents;
@property(readonly, nonatomic) BOOL isTransitAboveHorizon;
@property(readonly, nonatomic) NSDate *set;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *rise;
- (id)_dateFromOffset:(double)arg1;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails)arg2;

@end

