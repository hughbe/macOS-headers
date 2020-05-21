//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WFNetworkRetryManager : NSObject
{
    NSMutableDictionary *_failTrackerDict;
    NSMutableSet *_failingAPIVersionsSet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *failingAPIVersionsSet; // @synthesize failingAPIVersionsSet=_failingAPIVersionsSet;
@property(readonly, nonatomic) NSMutableDictionary *failTrackerDict; // @synthesize failTrackerDict=_failTrackerDict;
- (double)lastFailTimeInSecondsForAPIVersion:(id)arg1;
- (int)consecutiveFailsForAPIVersion:(id)arg1;
@property(readonly, nonatomic) NSArray *failingAPIVersions;
@property(readonly, nonatomic) NSArray *apiVersions;
- (BOOL)defaultAPIVersionIsFailingForSettings:(id)arg1 failTracker:(id)arg2;
- (void)requestFailureForAPIVersion:(id)arg1 aggregateDictionary:(id)arg2 error:(id)arg3;
- (void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2;
- (void)requestSuccessForAPIVersion:(id)arg1 aggregateDictionary:(id)arg2;
- (void)requestSuccessForAPIVersion:(id)arg1;
- (id)apiVersionForSettings:(id)arg1 aggregateDictionary:(id)arg2;
- (id)apiVersionForSettings:(id)arg1;
- (id)init;

@end

