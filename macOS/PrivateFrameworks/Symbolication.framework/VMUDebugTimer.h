//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface VMUDebugTimer : NSObject
{
    NSDate *_programStartTime;
    NSDate *_eventStartTime;
    NSString *_eventMessage;
}

+ (id)sharedTimerIfCreated;
+ (id)sharedTimer;
- (void).cxx_destruct;
- (void)stop;
- (void)_endEvent;
- (void)startWithMessage:(id)arg1;
- (id)init;

@end

