//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSExpression, NSPredicate, NSPredicateOperator;

@protocol NSPredicateVisitor
- (void)visitPredicateOperator:(NSPredicateOperator *)arg1;
- (void)visitPredicateExpression:(NSExpression *)arg1;
- (void)visitPredicate:(NSPredicate *)arg1;
@end

