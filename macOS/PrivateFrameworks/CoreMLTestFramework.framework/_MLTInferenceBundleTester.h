//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _MLTInferenceBundleTester : NSObject
{
    NSString *_errorString;
    NSString *_extractedBundleDirectory;
    NSArray *_extractedFiles;
    NSDictionary *_tests;
    long long _computeUnit;
    unsigned long long _testInBundle;
    unsigned long long _failingTestsInBundle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long failingTestsInBundle; // @synthesize failingTestsInBundle=_failingTestsInBundle;
@property(nonatomic) unsigned long long testInBundle; // @synthesize testInBundle=_testInBundle;
@property(nonatomic) long long computeUnit; // @synthesize computeUnit=_computeUnit;
@property(retain, nonatomic) NSDictionary *tests; // @synthesize tests=_tests;
@property(retain, nonatomic) NSArray *extractedFiles; // @synthesize extractedFiles=_extractedFiles;
@property(retain, nonatomic) NSString *extractedBundleDirectory; // @synthesize extractedBundleDirectory=_extractedBundleDirectory;
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
- (id)testsInBundle;
- (id)errorForTest:(id)arg1 error:(id *)arg2;
- (id)errorIfAny;
- (BOOL)runTestInBundle:(id)arg1 error:(id *)arg2;
- (BOOL)runAllTestsInBundle:(id *)arg1;
- (void)runTest:(id)arg1;
- (id)initWithBundleAtPath:(id)arg1 computeUnit:(long long)arg2 error:(id *)arg3;
- (void)populateTestCases;
- (void)dealloc;
- (BOOL)extractBundle:(id)arg1 error:(id *)arg2;
- (BOOL)cleanupAndReturnError:(struct archive *)arg1 writerArchive:(struct archive *)arg2 extractedFiles:(id)arg3 error:(id *)arg4;
- (void)deleteFiles:(id)arg1;

@end

