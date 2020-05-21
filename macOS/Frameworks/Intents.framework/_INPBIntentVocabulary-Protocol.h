//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentSlotVocabularyPolicy, _INPBIntentTypePhrases;

@protocol _INPBIntentVocabulary <NSObject>
+ (Class)intentTypePhrasesType;
+ (Class)intentSlotVocabularyPoliciesType;
@property(readonly, nonatomic) unsigned long long intentTypePhrasesCount;
@property(copy, nonatomic) NSArray *intentTypePhrases;
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyPoliciesCount;
@property(copy, nonatomic) NSArray *intentSlotVocabularyPolicies;
- (_INPBIntentTypePhrases *)intentTypePhrasesAtIndex:(unsigned long long)arg1;
- (void)addIntentTypePhrases:(_INPBIntentTypePhrases *)arg1;
- (void)clearIntentTypePhrases;
- (_INPBIntentSlotVocabularyPolicy *)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
- (void)addIntentSlotVocabularyPolicies:(_INPBIntentSlotVocabularyPolicy *)arg1;
- (void)clearIntentSlotVocabularyPolicies;
@end

