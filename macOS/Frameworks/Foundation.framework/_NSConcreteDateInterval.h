//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDateInterval.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NSConcreteDateInterval : NSDateInterval
{
    NSDate *_startDate;
    double _duration;
}

- (double)duration;
- (id)startDate;
- (id)endDate;
- (void)dealloc;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)init;

@end

