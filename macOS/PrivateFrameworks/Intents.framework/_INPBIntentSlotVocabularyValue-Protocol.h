//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol _INPBIntentSlotVocabularyValue <NSObject>
@property(readonly, nonatomic) BOOL hasPronunciation;
@property(copy, nonatomic) NSString *pronunciation;
@property(readonly, nonatomic) BOOL hasPhrase;
@property(copy, nonatomic) NSString *phrase;
@property(readonly, nonatomic) unsigned long long examplesCount;
@property(copy, nonatomic) NSArray *examples;
- (NSString *)examplesAtIndex:(unsigned long long)arg1;
- (void)addExamples:(NSString *)arg1;
- (void)clearExamples;
@end

