//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalActivatable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>
{
    BOOL _listening;
    NSString *_notificationName;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL listening; // @synthesize listening=_listening;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (BOOL)_removeObserver;
- (BOOL)_addObserver;
- (void)_notificationWithNameReceived:(id)arg1;
- (void)deactivate;
- (void)activate;
- (id)description;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

