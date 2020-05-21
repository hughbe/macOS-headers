//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSPredicate;

@interface NSTernaryExpression : NSExpression
{
    NSPredicate *_predicate;
    NSExpression *_trueExpression;
    NSExpression *_falseExpression;
}

+ (BOOL)supportsSecureCoding;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)falseExpression;
- (id)trueExpression;
- (id)predicate;
- (id)predicateFormat;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;

@end

