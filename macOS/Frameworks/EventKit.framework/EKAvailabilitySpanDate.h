//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface EKAvailabilitySpanDate : NSObject
{
    NSDate *_spanDate;
    long long _dateType;
    long long _spanType;
}

+ (unsigned int)valueForSpanType:(long long)arg1;
- (void).cxx_destruct;
@property long long spanType; // @synthesize spanType=_spanType;
@property long long dateType; // @synthesize dateType=_dateType;
@property(retain, nonatomic) NSDate *spanDate; // @synthesize spanDate=_spanDate;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2 spanType:(long long)arg3;

@end

