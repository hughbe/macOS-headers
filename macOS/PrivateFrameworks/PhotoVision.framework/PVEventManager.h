//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PVContext;

@interface PVEventManager : NSObject
{
    NSMutableArray *_notificationListeners;
    PVContext *_context;
}

- (void).cxx_destruct;
- (void)notifyListeners:(id)arg1;
- (void)publishEvent:(id)arg1 source:(id)arg2;
- (void)removeNotificationListener:(id)arg1;
- (void)addNotificationListener:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

