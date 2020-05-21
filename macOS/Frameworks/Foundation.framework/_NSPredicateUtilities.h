//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSPredicateUtilities : NSObject
{
}

+ (id)_constantValueClassesForSecureCoding;
+ (id)_operatorClassesForSecureCoding;
+ (id)_extendedExpressionClassesForSecureCoding;
+ (id)_expressionClassesForSecureCoding;
+ (id)_compoundPredicateClassesForSecureCoding;
+ (id)_predicateClassesForSecureCoding;
+ (id)_parserableCollectionDescription:(id)arg1;
+ (id)_parserableDateDescription:(id)arg1;
+ (id)_parserableStringDescription:(id)arg1;
+ (BOOL)_isReservedWordInParser:(id)arg1;
+ (id)inverseOrderKey:(id)arg1;
+ (id)distinct:(id)arg1;
+ (id)indexed:(id)arg1 by:(id)arg2;
+ (id)noindex:(id)arg1;
+ (id)onesComplement:(id)arg1;
+ (id)rightshift:(id)arg1 by:(id)arg2;
+ (id)leftshift:(id)arg1 by:(id)arg2;
+ (id)bitwiseXor:(id)arg1 with:(id)arg2;
+ (id)bitwiseOr:(id)arg1 with:(id)arg2;
+ (id)bitwiseAnd:(id)arg1 with:(id)arg2;
+ (id)canonical:(id)arg1;
+ (id)distanceToLocation:(id)arg1 fromLocation:(id)arg2;
+ (id)now;
+ (id)objectFrom:(id)arg1 withIndex:(id)arg2;
+ (id)randomn:(id)arg1;
+ (id)random;
+ (id)castObject:(id)arg1 toType:(id)arg2;
+ (id)_convertStringToNumber:(id)arg1;
+ (id)length:(id)arg1;
+ (id)lowercase:(id)arg1;
+ (id)uppercase:(id)arg1;
+ (id)tokenize:(id)arg1 using:(id)arg2;
+ (id)_collapseAndTokenize:(id)arg1 flags:(unsigned long long)arg2 locale:(id)arg3;
+ (id)_processAndTokenize:(id)arg1 flags:(unsigned long long)arg2 locale:(id)arg3;
+ (id)_doTokenization:(id)arg1 locale:(id)arg2;
+ (id)trunc:(id)arg1;
+ (id)abs:(id)arg1;
+ (id)ceiling:(id)arg1;
+ (id)floor:(id)arg1;
+ (id)exp:(id)arg1;
+ (id)raise:(id)arg1 toPower:(id)arg2;
+ (id)ln:(id)arg1;
+ (id)log:(id)arg1;
+ (id)sqrt:(id)arg1;
+ (id)modulus:(id)arg1 by:(id)arg2;
+ (id)divide:(id)arg1 by:(id)arg2;
+ (id)multiply:(id)arg1 by:(id)arg2;
+ (id)from:(id)arg1 subtract:(id)arg2;
+ (id)add:(id)arg1 to:(id)arg2;
+ (id)stddev:(id)arg1;
+ (id)mode:(id)arg1;
+ (id)median:(id)arg1;
+ (id)average:(id)arg1;
+ (id)max:(id)arg1;
+ (id)min:(id)arg1;
+ (id)count:(id)arg1;
+ (id)sum:(id)arg1;
+ (unsigned long long)_getCommonTypeFor:(id)arg1;
+ (unsigned long long)_getITypeFor:(const char *)arg1;
- (double)distanceFromLocation:(id)arg1;

@end

