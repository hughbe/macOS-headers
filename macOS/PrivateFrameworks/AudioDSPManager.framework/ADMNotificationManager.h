//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADNotificationBusStation, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ADMNotificationManager : NSObject
{
    struct queue _notificationQueue;
    struct vector<std::__1::any, std::__1::allocator<std::__1::any>> _typedSources;
    _Bool _isScheduled;
    ADNotificationBusStation *_busStation;
    NSMutableArray *_dynamicSources;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dynamicSources; // @synthesize dynamicSources=_dynamicSources;
@property(readonly, nonatomic) ADNotificationBusStation *busStation; // @synthesize busStation=_busStation;
@property(nonatomic) _Bool isScheduled; // @synthesize isScheduled=_isScheduled;
@property(readonly, nonatomic) ADNotificationBusStation *notificationBusStation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationDispatchQueue;
- (void)_unschedule;
- (void)unschedule;
- (void)_schedule;
- (void)schedule;
- (id)initWithDatabaseController:(id)arg1;

@end

