//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTCapabilitiesProviding-Protocol.h>

@class NSString;

@interface XCTAnimationsIdleNotifier : NSObject <XCTCapabilitiesProviding>
{
}

+ (void)addAnimationIdleHandler:(CDUnknownBlockType)arg1;
+ (void)handleAnimationsIdle;
+ (BOOL)isAnimationInProgress;
+ (void)animationDidStop;
+ (void)animationDidStart;
+ (BOOL)swizzleUIViewAnimationStateMethodsWithError:(id *)arg1;
+ (void)provideCapabilitiesToBuilder:(id)arg1;
+ (BOOL)supportsAnimationsIdleNotification;
+ (void)initialize;
- (void)notifyWhenIdle:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

