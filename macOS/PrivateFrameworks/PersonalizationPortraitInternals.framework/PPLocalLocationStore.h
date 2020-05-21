//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>
#import <PersonalizationPortraitInternals/PPFeedbackProcessing-Protocol.h>

@class PPLocationCache, PPLocationStorage, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered, PPMLocationDonation, PPMLocationScored, PPMObjectsDeletion;

@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing>
{
    PPLocationStorage *_storage;
    PPLocationCache *_cache;
    PPMLocationScored *_adoptionTracker;
    PPMLocationDonation *_donationTracker;
    PPMObjectsDeletion *_deletionTracker;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
}

+ (float)resolvedPerRecordDecayRateForRecord:(id)arg1 perRecordDecayRate:(float)arg2;
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;
+ (id)scoredLocationFromName:(id)arg1 category:(unsigned short)arg2 score:(double)arg3 sentimentScore:(double)arg4;
+ (unsigned short)routineLOITypeToLocationCategory:(long long)arg1;
+ (unsigned short)namedEntityCategoryToLocationCategory:(unsigned long long)arg1;
+ (BOOL)isLocationRelevantNamedEntityCategory:(unsigned long long)arg1;
+ (unsigned short)poiCategoryToPPLocationCategory:(id)arg1;
+ (id)locationFromMapItem:(id)arg1;
+ (id)locationNamedEntityToPPScoredLocation:(id)arg1;
+ (id)locationFromMapItemDictionary:(id)arg1;
+ (id)scoreLocations:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;
+ (id)defaultStore;
- (void).cxx_destruct;
- (void)processFeedback:(id)arg1;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)deleteAllLocationsOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (id)_unlimitedLocationRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (id)locationRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (id)homeOrWorkAddresses;
- (id)locationForWork;
- (id)locationForHome;
- (id)locationRecordOfCategory:(unsigned short)arg1;
- (BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)rankedLocationsWithQuery:(id)arg1 error:(id *)arg2;
- (void)_petLoggingForQuery:(id)arg1 resultCount:(unsigned long long)arg2 hasError:(BOOL)arg3;
- (BOOL)iterRankedLocationsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id *)arg7;
- (id)sourceStatsExcludedAlgorithms:(id)arg1;
- (id)_init;
- (id)initWithStorage:(id)arg1;
- (id)init;

@end

