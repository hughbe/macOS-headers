//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CWFEAP8021X : NSObject
{
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore *_storeRef;
    BOOL _isMonitoringEvents;
    NSString *_interfaceName;
    CDUnknownBlockType _eventHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (id)clientStatus:(id *)arg1;
- (id)controlMode:(id *)arg1;
- (id)supplicantState:(id *)arg1;
- (id)controlState:(id *)arg1;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (id)init;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1;

@end

