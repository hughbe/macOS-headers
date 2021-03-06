//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <AVFoundation/AVObjectMonitoring-Protocol.h>

@class AVWeakReference, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring>
{
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToMonitoredObject;
    NSObject<OS_dispatch_queue> *_operationStateSerializationQueue;
    NSObject<OS_dispatch_semaphore> *_monitoringIsFinishedSemaphore;
    NSArray *_notificationNames;
    BOOL _registeredForObjectNotifications;
    BOOL _started;
    BOOL _finished;
}

- (void)main;
- (void)cancel;
- (void)monitoredObjectHasDeparted;
- (void)_balanceMonitoringIsFinishedSemaphore;
- (void)_waitUntilFinishedIfNeeded;
- (void)_signalMonitoringIsFinishedIfNeeded;
- (id)_monitoredObject;
- (void)dealloc;
- (void)_unregisterForObjectNotifications;
- (void)_registerForObjectNotifications;
- (id)initWithObject:(id)arg1 notificationNames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

