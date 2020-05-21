//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@class NSString;

@interface PPConnectionsDuetSource : PPConnectionsSource <PPConnectionsLocationSource>
{
}

+ (id)duetUserActivitiesFromStreams:(id)arg1 limit:(unsigned long long)arg2 afterDate:(id)arg3 explanationSet:(id)arg4;
+ (id)identifier;
+ (id)sharedInstance;
- (id)whitespaceAndNewlineCharacterSet;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 afterDate:(id)arg2 explanationSet:(id)arg3;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 explanationSet:(id)arg2;
- (BOOL)isDuetEventAuthorized:(id)arg1 bundleID:(id)arg2;
- (BOOL)isEligibleForPredictions:(id)arg1;
- (id)supportedLocationFields;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 duetLimit:(long long)arg5 consumer:(unsigned long long)arg6 richLocationItems:(BOOL)arg7 resolveEKLocations:(BOOL)arg8 explanationSet:(id)arg9;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

