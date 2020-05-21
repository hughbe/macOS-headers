//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface INCExtensionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_extensions;
    NSMutableDictionary *_killTimers;
}

+ (id)sharedManager;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_manageExtension:(id)arg1 requestIdentifier:(id)arg2;
- (void)_killExtensionWithBundleIdentifier:(id)arg1;
- (void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg1;
- (BOOL)isExtensionLoadedForExtensionBundleIdentifier:(id)arg1;
- (void)killExtension:(id)arg1 requestIdentifier:(id)arg2 afterTimeout:(double)arg3;
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

