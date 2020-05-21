//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotVocabularyPolicy-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <_INPBIntentSlotVocabularyPolicy, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_intentSlotNames;
    NSArray *_intentSlotVocabularyConcepts;
}

+ (BOOL)supportsSecureCoding;
+ (Class)intentSlotVocabularyConceptsType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *intentSlotVocabularyConcepts; // @synthesize intentSlotVocabularyConcepts=_intentSlotVocabularyConcepts;
@property(copy, nonatomic) NSArray *intentSlotNames; // @synthesize intentSlotNames=_intentSlotNames;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyConceptsCount;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;
- (void)clearIntentSlotVocabularyConcepts;
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSlotNamesCount;
- (void)addIntentSlotNames:(id)arg1;
- (void)clearIntentSlotNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

