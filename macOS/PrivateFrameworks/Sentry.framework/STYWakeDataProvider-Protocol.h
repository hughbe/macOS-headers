//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sentry/NSObject-Protocol.h>

@protocol STYWakeDataConsumer;

@protocol STYWakeDataProvider <NSObject>
@property __weak id <STYWakeDataConsumer> consumer;
- (unsigned long long)sleepType;
- (unsigned long long)firstHidWakeEventAfter:(unsigned long long)arg1 before:(unsigned long long)arg2;
- (unsigned long long)lastWakeTime:(unsigned long long *)arg1;
@end

