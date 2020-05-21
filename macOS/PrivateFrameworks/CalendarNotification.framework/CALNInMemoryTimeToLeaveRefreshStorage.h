//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTimeToLeaveRefreshStorage-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CALNInMemoryTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>
{
    NSMutableDictionary *_refreshDateMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *refreshDateMap; // @synthesize refreshDateMap=_refreshDateMap;
- (void)removeRefreshDates;
- (void)removeRefreshDateWithIdentifier:(id)arg1;
- (id)refreshDateWithIdentifier:(id)arg1;
- (void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (id)refreshDates;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

