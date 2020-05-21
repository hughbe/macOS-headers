//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioDSPManager/ADNotificationBusDelegate-Protocol.h>

@class ADNotificationBus, ADNotificationDarwinNotificationToken, NSString;
@protocol ADNotificationRegistrationToken;

__attribute__((visibility("hidden")))
@interface ADNotificationDarwinNotificationEventSource : NSObject <ADNotificationBusDelegate>
{
    NSString *_notificationName;
    NSString *_topic;
    ADNotificationDarwinNotificationToken *_muxToken;
    id <ADNotificationRegistrationToken> _delegateToken;
    ADNotificationBus *_eventBus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ADNotificationBus *eventBus; // @synthesize eventBus=_eventBus;
@property(retain, nonatomic) id <ADNotificationRegistrationToken> delegateToken; // @synthesize delegateToken=_delegateToken;
@property(retain, nonatomic) ADNotificationDarwinNotificationToken *muxToken; // @synthesize muxToken=_muxToken;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)dealloc;
- (void)busWillSleep:(id)arg1;
- (void)busWillWakeUp:(id)arg1;
- (void)notificationFired;
- (void)registerWithBusStation:(id)arg1 forTopic:(id)arg2;
- (id)initWithNotificationName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

