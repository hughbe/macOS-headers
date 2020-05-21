//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateInterval, NSMutableDictionary, PHPhotoLibrary;

@interface PHSuggestionMessageContext : NSObject
{
    NSArray *_messages;
    NSDateInterval *_dateInterval;
    unsigned long long _numberOfParticipants;
    NSArray *_cnParticipants;
    NSArray *_phParticipants;
    NSMutableDictionary *_suggestionMatchingResultsBySuggestionIdentifier;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_resolvedParticipants;
    NSArray *_messageTokens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *messageTokens; // @synthesize messageTokens=_messageTokens;
@property(retain, nonatomic) NSArray *resolvedParticipants; // @synthesize resolvedParticipants=_resolvedParticipants;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSMutableDictionary *suggestionMatchingResultsBySuggestionIdentifier; // @synthesize suggestionMatchingResultsBySuggestionIdentifier=_suggestionMatchingResultsBySuggestionIdentifier;
@property(readonly, nonatomic) NSArray *phParticipants; // @synthesize phParticipants=_phParticipants;
@property(readonly, nonatomic) NSArray *cnParticipants; // @synthesize cnParticipants=_cnParticipants;
@property(readonly, nonatomic) unsigned long long numberOfParticipants; // @synthesize numberOfParticipants=_numberOfParticipants;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)_mostRecentSuggestionFromSuggestions:(id)arg1;
- (id)confidentMatchSuggestionUsingStrategy:(unsigned long long)arg1;
- (id)matchingResultWithSuggestion:(id)arg1;
- (void)matchWithSuggestions:(id)arg1;
- (id)_suggestionsMatchingType:(long long)arg1;
- (id)detailedDescription;
- (id)description;
- (void)setPhParticipants:(id)arg1;
- (void)setCnParticipants:(id)arg1;
- (id)initWithMessages:(id)arg1 participantsFromPersons:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithMessages:(id)arg1;
- (id)initWithMessages:(id)arg1 participantsFromContacts:(id)arg2 photoLibrary:(id)arg3;

@end

