//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class _PASLock;

@interface SGNamedEntityDissector : SGPipelineDissector
{
    _PASLock *_lock;
    BOOL _significanceCheckEnabled;
    int _linguisticDataNotificationToken;
}

- (void).cxx_destruct;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 algorithms:(id)arg5;
- (id)_entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 dataDetections:(id)arg3 source:(id)arg4 cloudSync:(BOOL)arg5 algorithms:(id)arg6;
- (void)_collectCustomTaggerResultsWithText:(id)arg1 eligibleRegions:(id)arg2 isMessagesSource:(BOOL)arg3 addNamedEntity:(CDUnknownBlockType)arg4;
- (void)_collectNLPTaggerResultsWithText:(id)arg1 ddMatches:(id)arg2 eligibleRegions:(id)arg3 isMessagesSource:(BOOL)arg4 addNamedEntity:(CDUnknownBlockType)arg5;
- (void)_harvestLocationFromEntity:(id)arg1 category:(unsigned long long)arg2 enrichment:(id)arg3 algorithm:(unsigned short)arg4;
- (id)_collectDataDetectorsWithText:(id)arg1 algorithms:(id)arg2 dataDetections:(id)arg3 isMessagesSource:(BOOL)arg4 lookupQids:(id)arg5 addNamedEntity:(CDUnknownBlockType)arg6;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;
- (id)initWithSignificanceCheckEnabled:(BOOL)arg1;

@end

