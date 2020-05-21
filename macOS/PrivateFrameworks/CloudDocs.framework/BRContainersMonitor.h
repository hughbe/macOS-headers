//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BRContainersMonitor : NSObject
{
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isContainerIDForeground:(id)arg1;
+ (id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (BOOL)isContainerID:(id)arg1;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forContainerID:(id)arg2;
- (void)addObserver:(id)arg1 forContainerID:(id)arg2;
- (void)dealloc;
- (id)init;

@end

