//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CPDelayedUpdateManager : NSObject
{
    NSMutableSet *_updaters;
}

+ (id)sharedManager;
- (void)applicationWillTerminate:(id)arg1;
- (void)performDelayedUpdates;
- (void)removeUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)removeUpdaterInfo:(id)arg1;
- (void)addUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)startDelayedUpdate;
- (void)cancelDelayedUpdate;
- (void)dealloc;
- (id)init;

@end

