//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMRuntimeTest.h>

@class NSArray, NSMutableArray, NSTimer;

@interface IMRuntimeTestSuite : IMRuntimeTest
{
    NSMutableArray *_tests;
    double _testSuiteStartDelay;
    double _testStartDelay;
    NSMutableArray *_runningTests;
    IMRuntimeTest *_currentTest;
    NSTimer *_timer;
}

+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1;
+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1 withCount:(long long)arg2;
- (void).cxx_destruct;
@property __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain) IMRuntimeTest *currentTest; // @synthesize currentTest=_currentTest;
@property(retain) NSMutableArray *runningTests; // @synthesize runningTests=_runningTests;
@property double testStartDelay; // @synthesize testStartDelay=_testStartDelay;
@property double testSuiteStartDelay; // @synthesize testSuiteStartDelay=_testSuiteStartDelay;
@property(retain) NSArray *tests; // @synthesize tests=_tests;
- (void)currentTestDidFinish;
- (void)_timerExpired:(id)arg1;
- (void)_startNextTest;
- (void)_cancelTimer;
- (void)startTest;
- (void)removeTest:(id)arg1;
- (void)addTest:(id)arg1;
- (id)init;

@end

