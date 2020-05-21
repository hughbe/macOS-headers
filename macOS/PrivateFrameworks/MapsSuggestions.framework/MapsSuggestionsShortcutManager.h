//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsMeCardObserver-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsMeCardReader-Protocol.h>

@class MapsSuggestionsContacts, MapsSuggestionsMeCard, MapsSuggestionsObservers, MapsSuggestionsRoutine, NSArray, NSMutableArray, NSString;
@protocol MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader>
{
    struct Queue _queue;
    id <MapsSuggestionsShortcutStorage> _storage;
    id <MapsSuggestionsShortcutSuggestor> _suggestor;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsContacts *_contacts;
    NSMutableArray *_hiddenShortcuts;
    MapsSuggestionsMeCard *_rawMeCard;
    NSArray *_shortcutsOverlay;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currCorrectedMeCard;
    NSArray *_rawHomeAddressStrings;
    NSArray *_rawWorkAddressStrings;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)routine;
- (id)suggestor;
- (id)storage;
- (void)removeMeCardObserver:(id)arg1;
- (void)addMeCardObserver:(id)arg1;
- (BOOL)readMeCardWithHandler:(CDUnknownBlockType)arg1;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
- (BOOL)proposeAdditionalShortcutsOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 withSnapshot:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)removeShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)addOrUpdateShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)_loadCorrectedMeCardWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)__loadCorrectedMeCardWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)_mergeShortcutsToMeCardAndCallHandler:(CDUnknownBlockType)arg1;
- (void)test_sortMapsSuggestionsShortcuts:(id)arg1;
- (id)test_setUpPlaceholdersIfNeeded:(id)arg1 overlays:(id)arg2;
- (id)initWithStorage:(id)arg1 suggestor:(id)arg2 contacts:(id)arg3 routine:(id)arg4;
- (id)initWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

