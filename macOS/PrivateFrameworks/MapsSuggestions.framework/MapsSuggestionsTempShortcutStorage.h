//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutStorage-Protocol.h>

@class NSString;

@interface MapsSuggestionsTempShortcutStorage : NSObject <MapsSuggestionsShortcutStorage>
{
    struct Queue _queue;
    NSString *_path;
}

+ (id)path;
- (id).cxx_construct;
- (void).cxx_destruct;
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

