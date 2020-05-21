//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, geo_isolater;
@protocol OS_xpc_object;

@interface GEOXPCActivity : NSObject
{
    NSString *_name;
    BOOL _isRepeating;
    BOOL _shouldLaunchDaemon;
    CDUnknownBlockType _handler;
    NSObject<OS_xpc_object> *_activity;
    geo_isolater *_isolation;
}

+ (void)cancelActivity:(id)arg1;
+ (id)registerActivity:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)checkInActivity:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)resetActivities;
+ (void)clearActivity:(id)arg1;
+ (void)addActivity:(id)arg1 shouldLaunchDaemon:(BOOL)arg2 repeating:(BOOL)arg3;
+ (void)updateActivities:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelActivity;
- (void)finishActivity;
- (void)deferActivity;
- (BOOL)shouldDeferActivity;
- (void)_handleRunActivity:(id)arg1;
- (id)initWithName:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;

@end

