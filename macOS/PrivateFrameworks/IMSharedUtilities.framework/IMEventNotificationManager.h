//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMEventNotificationQueueDelegate-Protocol.h>

@class IMAutomaticEventNotificationQueue, IMEventListenerList, NSMutableArray, NSString;

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate>
{
    IMAutomaticEventNotificationQueue *_notificationQueue;
    double _eventTimeout;
    IMEventListenerList *_eventListeners;
    NSMutableArray *_registeredNotificationQueues;
    long long _busyCount;
}

- (void).cxx_destruct;
@property long long busyCount; // @synthesize busyCount=_busyCount;
@property(readonly, nonatomic) NSMutableArray *registeredNotificationQueues; // @synthesize registeredNotificationQueues=_registeredNotificationQueues;
@property(readonly, nonatomic) IMEventListenerList *eventListeners; // @synthesize eventListeners=_eventListeners;
@property double eventTimeout; // @synthesize eventTimeout=_eventTimeout;
@property(readonly, nonatomic) IMAutomaticEventNotificationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void)appendNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)pushNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)appendNotificationForEventHandler:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)pushNotificationForEventHandler:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)pauseEventNotifications:(BOOL)arg1;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForEventHandler:(id)arg1;
- (id)createEventListenerForNotificationName:(id)arg1 object:(id)arg2;
- (void)registerEventListener:(id)arg1;
- (void)eventListenerDidFinish:(id)arg1;
- (void)registerNotificationQueue:(id)arg1;
- (void)eventNotificationQueue:(id)arg1 didChangeBusyState:(BOOL)arg2;
@property(readonly, getter=isBusy) BOOL busy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

