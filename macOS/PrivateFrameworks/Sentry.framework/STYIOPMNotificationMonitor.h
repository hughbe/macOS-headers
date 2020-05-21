//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, STYIOPMNotificationDelegate;

@interface STYIOPMNotificationMonitor : NSObject
{
    struct __IOPMConnection *_connectionToIOPM;
    unsigned long long _eventTimestamps[3];
    char _receivedEarlyNotification[3];
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <STYIOPMNotificationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <STYIOPMNotificationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendEventNotification:(unsigned long long)arg1;
- (void)_handleEvent:(unsigned int)arg1 ofType:(unsigned long long)arg2;
- (void)iopmEvent:(unsigned int)arg1;
- (BOOL)_startMonitoring;
- (void)dealloc;
- (id)init;

@end

