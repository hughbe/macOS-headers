//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSTimer;

@interface GCAnalytics : NSObject
{
    NSMutableDictionary *_controllersData;
    NSString *_bundleID;
    NSTimer *_eventPollTimer;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onSiriMotionEnabled;
- (void)unpublishController:(id)arg1;
- (void)publishController:(id)arg1;
- (void)runInputPollTimer;
- (void)checkMultipleControllers;
- (void)sendInputsPressedEvent:(const CDStruct_6ad99454 *)arg1;
- (id)init;
- (id)getBundleID;

@end

