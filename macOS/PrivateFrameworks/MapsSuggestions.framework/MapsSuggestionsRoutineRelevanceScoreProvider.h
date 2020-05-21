//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider-Protocol.h>

@class MapsSuggestionsRoutine, NSArray, NSDate, NSString;

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider>
{
    NSDate *_fetchEntriesFromDate;
    struct Queue _queue;
    MapsSuggestionsRoutine *_routine;
    NSArray *_routineLocations;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_fetchLOIsWithCallback:(CDUnknownBlockType)arg1;
- (id)_confidencesForMapItem:(id)arg1;
- (id)_confidencesForMapItems:(id)arg1;
- (void)preLoad;
- (BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithRoutine:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

