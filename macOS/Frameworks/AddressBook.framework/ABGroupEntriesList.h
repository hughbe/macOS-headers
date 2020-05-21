//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABGroupEntry, NSArray, NSDictionary;
@protocol ABGroupEntriesFactory;

@interface ABGroupEntriesList : NSObject
{
    NSArray *_groupEntries;
    NSDictionary *_groupEntriesByIdentifier;
    ABGroupEntry *_allDirectoriesGroupEntry;
    ABGroupEntry *_defaultDirectoryGroupEntry;
    id <ABGroupEntriesFactory> _groupEntriesFactory;
    BOOL _needsRebuild;
    BOOL _defersRebuild;
}

@property(retain) ABGroupEntry *defaultDirectoryGroupEntry; // @synthesize defaultDirectoryGroupEntry=_defaultDirectoryGroupEntry;
@property(retain) ABGroupEntry *allDirectoriesGroupEntry; // @synthesize allDirectoriesGroupEntry=_allDirectoriesGroupEntry;
@property(copy) NSDictionary *groupEntriesByIdentifier; // @synthesize groupEntriesByIdentifier=_groupEntriesByIdentifier;
- (void)willRemoveGroup:(id)arg1;
- (id)entryForSelectionWithEntry:(id)arg1;
- (id)allContactsGroupEntry;
- (id)depthFirstSearchWithComparator:(CDUnknownBlockType)arg1;
- (id)depthFirstSearchWithGroupEntries:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)groupEntriesForAccountIdentifier:(id)arg1;
- (id)groupEntryForAccount:(id)arg1;
- (id)groupEntryForGroup:(id)arg1;
- (id)groupEntryWithIdentifier:(id)arg1;
- (void)indexGroupEntriesByIdentifier;
- (void)addGroupEntries:(id)arg1 toIndex:(id)arg2;
- (void)setGroupEntries:(id)arg1;
- (id)groupEntries;
- (void)setDefersRebuild:(BOOL)arg1;
- (void)markAsNeedingRebuild;
- (void)didRebuildGroupEntries;
- (void)performRebuild;
- (void)rebuildGroupEntries;
- (void)dealloc;
- (id)initWithGroupEntriesFactory:(id)arg1;
- (id)init;

@end

