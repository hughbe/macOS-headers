//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSDateValue.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@interface ICSDateTimeValue : ICSDateValue <NSSecureCoding>
{
    long long _hour;
    long long _minute;
    long long _second;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) long long second; // @synthesize second=_second;
@property(readonly) long long minute; // @synthesize minute=_minute;
@property(readonly) long long hour; // @synthesize hour=_hour;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)components;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (int)dateType;

@end

