//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STTimer;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest
{
    unsigned long long _action;
    STTimer *_timer;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)action;
- (id)timer;
- (id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2;

@end

