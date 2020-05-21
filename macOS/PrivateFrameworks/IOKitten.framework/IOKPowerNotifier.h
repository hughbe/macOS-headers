//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IOKPowerNotifierDelegate;

@interface IOKPowerNotifier : NSObject
{
    struct IONotificationPort *_notificationPort;
    unsigned int _connection;
    unsigned int _notifier;
    id <IOKPowerNotifierDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IOKPowerNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)systemHasPoweredOn;
- (void)systemWillNotSleep;
- (void)systemWillPowerOn;
- (void)systemWillSleep;
- (void)_handlePowerNotificationWithMessageType:(unsigned int)arg1 andArgument:(long long)arg2;
- (id)initWithDispatchQueue:(id)arg1;

@end

