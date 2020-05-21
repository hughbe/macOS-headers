//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface SGTStringComparator : NSObject
{
    NSArray *_alignment;
    NSArray *_tailAlignment;
    double _logScore;
    BOOL _hasLogScore;
    NSMutableArray *_allScoreCombinations;
    BOOL hasEmptySentence;
    NSNumber *_spotlightScore;
    NSString *_stringA;
    NSString *_stringB;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *stringB; // @synthesize stringB=_stringB;
@property(copy, nonatomic) NSString *stringA; // @synthesize stringA=_stringA;
- (id)spotlightScore;
- (id)last2WordsScore;
- (id)lastWordScore;
- (id)averageGlobalScore;
- (id)worstGlobalScore;
- (id)bestGlobalScore;
- (id)computeGlobalScoreWithPredicate:(id)arg1;
- (id)alignmentLogScore;
- (id)alignedWordsWithFuzzyThreshold:(double)arg1;
@property(readonly, nonatomic) NSArray *tailAlignment;
@property(readonly, nonatomic) NSArray *alignment;
- (unsigned long long)perfectAlignmentScore;
@property(readonly, nonatomic) NSArray *perfectAlignment;
- (id)alignmentForThreshold:(int)arg1;
@property(readonly, nonatomic) NSArray *allScoreCombinations;
- (id)description;
- (id)initWithStringA:(id)arg1 stringB:(id)arg2;
- (id)initWithStringA:(id)arg1 stringB:(id)arg2 attributeName:(id)arg3 evaluator:(struct __MDSimpleQueryEvaluator *)arg4;

@end

