//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathRowExpression : SCRCMathArrayExpression
{
}

- (id)latexDescriptionInMathMode:(BOOL)arg1;
- (id)speakableSummary;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;
- (id)_indexesOfCharactersInWords;
- (BOOL)endsWithSpace;
- (BOOL)beginsWithSpace;
- (unsigned long long)fractionLevel;
- (BOOL)canBeUsedWithBase;
- (BOOL)canBeUsedWithRange;
- (BOOL)isWordOrAbbreviation;
- (BOOL)isFunctionName;
- (long long)integerValue;
- (BOOL)isInteger;
- (BOOL)isNumber;

@end

