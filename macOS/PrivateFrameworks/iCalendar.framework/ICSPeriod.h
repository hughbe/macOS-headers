//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSSecureCoding>
{
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isDurationBased;
- (id)duration;
- (id)end;
- (id)start;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithStart:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

