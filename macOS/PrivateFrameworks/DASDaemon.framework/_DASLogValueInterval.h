//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _DASLogValueInterval : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSObject *_value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)durationString;
- (double)duration;
- (id)description;
- (id)intervalString;
- (BOOL)isEqual:(id)arg1;

@end

