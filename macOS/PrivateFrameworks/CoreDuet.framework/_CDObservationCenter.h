//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface _CDObservationCenter : NSObject
{
    NSMapTable *_senderToNotificationObservers;
    NSMapTable *_senderToNotificationObserverObservers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)observerCountOnName:(id)arg1;
- (void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4;
- (void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5;
- (void)_postObserverChangesNotificationWithObserverCounts:(id)arg1;
- (void)_removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 observerObserver:(BOOL)arg4 observerCounts:(id)arg5;
- (void)_removeObserver:(id)arg1 name:(id)arg2 observerObserver:(BOOL)arg3;
- (void)_removeObserver:(id)arg1 observerObserver:(BOOL)arg2;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 observerObserver:(BOOL)arg4;
- (void)_addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 observerObserver:(BOOL)arg5 usingCall:(id)arg6;
- (id)_observerToEntriesForSender:(id)arg1 name:(id)arg2 observerObserver:(BOOL)arg3 shouldCreate:(BOOL)arg4;
- (id)_notificationToObserverEntriesForSender:(id)arg1 observerObserver:(BOOL)arg2 shouldCreate:(BOOL)arg3;
- (id)init;

@end

