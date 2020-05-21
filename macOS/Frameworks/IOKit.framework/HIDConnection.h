//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDConnection : NSObject
{
    struct {
        struct __IOHIDEventSystem *system;
        struct __CFDictionary *notifications;
        struct __IOHIDEventQueue *queue;
        struct __IOMIGMachPort *port;
        unsigned int reply_port;
        CDUnknownFunctionPointerType demuxCallback;
        void *demuxRefcon;
        CDUnknownFunctionPointerType terminationCallback;
        void *terminationRefcon;
        struct __CFSet *services;
        int pid;
        NSObject<OS_dispatch_queue> *dispatchQueue;
        unsigned int sendPossiblePort;
        NSObject<OS_dispatch_source> *sendPossibleSource;
        unsigned int sendPossible;
        struct __CFSet *propertySet;
        struct __CFString *caller;
        struct __CFString *procName;
        struct __CFString *uuid;
        char *uuidStr;
        int type;
        struct __CFDictionary *attributes;
        unsigned int task_name_port;
        struct os_unfair_recursive_lock_s lock;
        union IOHIDEventSystemConnectionEntitlements *entitlements;
        unsigned int disableProtectedServices;
        int filterPriority;
        unsigned int state;
        struct os_unfair_lock_s notificationsLock;
        struct __CFDictionary *virtualServices;
        unsigned long long eventFilterMask;
        unsigned int eventFilteredCount;
        unsigned int eventFilterTimeoutCount;
        unsigned int droppedEventCount;
        unsigned int currentDroppedEventCount;
        unsigned long long droppedEventTypeMask;
        unsigned int eventCount;
        unsigned long long eventMask;
        struct timeval lastDroppedEventTime;
        struct timeval firstDroppedEventTime;
        unsigned long long maxEventLatency;
        int droppedEventStatus;
        unsigned long long propertyChangeNotificationHandlingTime;
        struct __CFData *eventLog;
        unsigned int *eventTypeCnt;
        unsigned int activityState;
        unsigned int activityStateChangeCount;
        unsigned long long idleNotificationTime;
        NSObject<OS_dispatch_source> *activityDispatchSource;
        struct __IOHIDNotification *activityNotification;
        struct __CFData *activityLog;
        struct __IOHIDConnectionFilter *filter;
    } _connection;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)_cfTypeID;

@end

