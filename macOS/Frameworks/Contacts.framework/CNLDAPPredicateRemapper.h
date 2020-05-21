//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNLDAPPredicateRemapping;

__attribute__((visibility("hidden")))
@interface CNLDAPPredicateRemapper : NSObject
{
    id <CNLDAPPredicateRemapping> _factory;
}

- (void).cxx_destruct;
@property(retain) id <CNLDAPPredicateRemapping> factory; // @synthesize factory=_factory;
- (id)predicateForLeft:(id)arg1 betweenLowerBound:(id)arg2 upperBound:(id)arg3 error:(id *)arg4;
- (id)predicateForLeft:(id)arg1 containsRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 inRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 endsWithRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 beginsWithRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 likeRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 matchesRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 notEqualToRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 equalToRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 greaterThanOrEqualToRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 greaterThanRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 lessThanOrEqualToRight:(id)arg2 error:(id *)arg3;
- (id)predicateForLeft:(id)arg1 lessThanRight:(id)arg2 error:(id *)arg3;
- (id)acceptComparisonPredicateForRemapping:(id)arg1 error:(id *)arg2;
- (id)acceptCompoundPredicateForRemapping:(id)arg1 error:(id *)arg2;
- (id)remapPredicate:(id)arg1 error:(id *)arg2;
- (id)initWithRemapping:(id)arg1;

@end

