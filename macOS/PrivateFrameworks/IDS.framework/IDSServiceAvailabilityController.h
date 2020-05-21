//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject
{
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)availabilityForListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)addListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)hasListenerID:(id)arg1 forService:(id)arg2;
- (id)containerForService:(id)arg1 create:(BOOL)arg2;
- (void)_stopListeningToMonitor:(id)arg1;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (void)_postNotificationForService:(id)arg1 availability:(long long)arg2;
- (BOOL)_isValidServiceType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

