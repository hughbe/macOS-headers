//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutStorage-Protocol.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutStorage : NSObject <MapsSuggestionsShortcutStorage>
{
    struct ReadWriteQueue _rwQueue;
    NSArray *_fakeResults;
    NSArray *_passedInput;
    NSError *_fakeError;
    unsigned long long _calledLoad;
    unsigned long long _calledAddOrUpdate;
    unsigned long long _calledRemove;
    unsigned long long _calledMove;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)calledMove;
- (unsigned long long)calledRemove;
- (unsigned long long)calledAddOrUpdate;
- (unsigned long long)calledRequestLoad;
- (id)passedInput;
- (void)configureError:(id)arg1;
- (void)configureResults:(id)arg1;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
- (BOOL)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)removeShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)addOrUpdateShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

