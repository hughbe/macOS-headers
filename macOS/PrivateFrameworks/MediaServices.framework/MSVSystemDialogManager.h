//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVSystemDialogManager : NSObject
{
    struct __CFDictionary *_registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg1;
- (id)systemDialogForUserNotification:(struct __CFUserNotification *)arg1;
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification *)arg2;
- (void)dealloc;
- (id)init;

@end

