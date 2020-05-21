//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CUIKNotificationConflictCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)conflictsForNotification:(id)arg1;
- (void)updateConflictsForNotification:(id)arg1 synchronously:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)_updateNotification:(id)arg1 withCacheObject:(id)arg2;
- (id)init;

@end

