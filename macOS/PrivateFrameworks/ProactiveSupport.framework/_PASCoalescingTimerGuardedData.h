//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet;
@protocol OS_dispatch_source;

@interface _PASCoalescingTimerGuardedData : NSObject
{
    NSObject<OS_dispatch_source> *coalescingSource;
    unsigned long long currentCoalescingTimerId;
    NSDate *nextCoalescedEventTime;
    NSMutableSet *nonCoalescingSources;
    unsigned long long currentNonCoalescingTimerGeneration;
    id acc;
}

- (void).cxx_destruct;

@end

