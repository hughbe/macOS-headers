//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MCPowerLog : NSObject
{
    NSString *_eventName;
    NSObject<OS_dispatch_queue> *_logQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)_logEventWithDictionary:(id)arg1;
- (void)logEventWithDictionary:(id)arg1;
- (id)initWithEventName:(id)arg1;

@end

