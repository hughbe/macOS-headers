//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKCandidate, NSArray, NSDictionary;

@interface IMKCandidateListDictionary : NSObject
{
    unsigned long long _candidateCount;
    NSDictionary *_dictionary;
    NSArray *_orderedKeys;
}

+ (id)listDictionaryWithList:(id)arg1;
+ (id)listDictionaryWithKeys:(id)arg1 array:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *orderedKeys; // @synthesize orderedKeys=_orderedKeys;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)description;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) IMKCandidate *lastCandidate;
@property(readonly, nonatomic) IMKCandidate *firstCandidate;
- (id)candidateListForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *allCandidates;
- (id)initWithKeys:(id)arg1 array:(id)arg2;

@end

