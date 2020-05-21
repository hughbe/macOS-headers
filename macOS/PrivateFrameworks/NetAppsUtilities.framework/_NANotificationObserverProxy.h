//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilities/_NAObserverProxy.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface _NANotificationObserverProxy : _NAObserverProxy
{
    id _notificationObserver;
    NSOperationQueue *_observerQueue;
    CDUnknownBlockType _observerBlock;
    NSString *_notificationName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(readonly, nonatomic) NSOperationQueue *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void)invalidate;
- (void)performObserverBlock;
- (id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(CDUnknownBlockType)arg4;

@end

