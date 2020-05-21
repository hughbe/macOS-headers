//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGSuggester-Protocol.h>

@class NSString;

@interface PGDayHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>
{
}

+ (BOOL)canSuggestHighlightNodeWithoutPeople:(id)arg1 loggingConnection:(id)arg2;
+ (BOOL)shouldSuggestHighlightNode:(id)arg1 loggingConnection:(id)arg2;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

