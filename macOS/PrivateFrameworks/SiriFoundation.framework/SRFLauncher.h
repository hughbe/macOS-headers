//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SRFLauncher : NSObject
{
    NSXPCConnection *_connectionToSiri;
}

+ (void)sendSiriNotification:(id)arg1;
+ (void)dismissSiriFromSource:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)invokeSiriFromSource:(long long)arg1 withAction:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)_shouldLaunchSiriForSource:(long long)arg1 action:(long long)arg2;
+ (void)_launchSiri;
+ (id)_standardSiriAppURL;
+ (BOOL)isSiriRunning;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connectionToSiri; // @synthesize connectionToSiri=_connectionToSiri;
- (void)_dismissSiriFromSource:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_invokeSiriFromSource:(long long)arg1 withAction:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendSiriNotification:(id)arg1 launchingIfNotRunning:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

