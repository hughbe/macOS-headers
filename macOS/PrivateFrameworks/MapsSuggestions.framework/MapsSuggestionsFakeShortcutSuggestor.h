//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutSuggestor-Protocol.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor>
{
    struct ReadWriteQueue _rwQueue;
    NSArray *_configuredResults;
    NSError *_configuredError;
    unsigned long long _calledPropose;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)calledRequestSuggest;
- (void)configureError:(id)arg1;
- (void)configureResults:(id)arg1;
- (BOOL)suggestShortcutsOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

