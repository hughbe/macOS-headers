//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLProbabilityDictionary.h>

@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary
{
    map_f8690629 _mapIntLabelToIndex;
}

+ (id)probabilityDictionaryForInt64Labels:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) map_f8690629 mapIntLabelToIndex; // @synthesize mapIntLabelToIndex=_mapIntLabelToIndex;
- (id)copy;
- (id)keyEnumerator;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)initWithIntLabels:(id)arg1;

@end

