//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentSlotVocabularyConcept;

@protocol _INPBIntentSlotVocabularyPolicy <NSObject>
+ (Class)intentSlotVocabularyConceptsType;
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyConceptsCount;
@property(copy, nonatomic) NSArray *intentSlotVocabularyConcepts;
@property(readonly, nonatomic) unsigned long long intentSlotNamesCount;
@property(copy, nonatomic) NSArray *intentSlotNames;
- (_INPBIntentSlotVocabularyConcept *)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
- (void)addIntentSlotVocabularyConcepts:(_INPBIntentSlotVocabularyConcept *)arg1;
- (void)clearIntentSlotVocabularyConcepts;
- (NSString *)intentSlotNamesAtIndex:(unsigned long long)arg1;
- (void)addIntentSlotNames:(NSString *)arg1;
- (void)clearIntentSlotNames;
@end

