//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDSoftwareUpdatesStore.h>

@class MISSING_TYPE;

@interface _TtC11AppStoreKit11UpdateStore : ASDSoftwareUpdatesStore
{
    MISSING_TYPE *notificationQueue;
    MISSING_TYPE *coalesceUpdateNotifications;
    MISSING_TYPE *notificationWorkItem;
}

- (void).cxx_destruct;
- (void)broadcastChangeNotificationIfNotCoalescing;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

