//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAStatisticsElapsedTime : NSObject
{
    double _elapsedTime;
    double _elapsedStart;
    long long _elapsedCounter;
    double _lastBeginTransactionTime;
    double _lastEndTransactionTime;
}

- (BOOL)isTransactionPending;
- (double)elapsedTimeSinceLastEndTransaction;
- (double)elapsedTimeSinceLastBeginTransaction;
- (double)elapsedTime;
- (void)end;
- (void)begin;
- (void)dealloc;
- (id)init;

@end

