//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSearchElementMemberOfGroupPredicates : NSObject
{
}

+ (id)predicatesForSmartGroupsWithComparison:(long long)arg1 helper:(CDUnknownBlockType)arg2;
+ (id)hasVisibleParentGroupsPredicate;
+ (id)hasNoVisibleParentGroupsPredicate;
+ (id)parentGroupClauseForComparison:(long long)arg1;
+ (id)predicateForMemberOfAnyGroupWithComparison:(long long)arg1 helper:(CDUnknownBlockType)arg2;
+ (id)predicateForNotMemberOfDumbGroup:(id)arg1;
+ (id)predicateForMemberOfDumbGroup:(id)arg1;
+ (id)predicateForMemberOfDumbGroup:(id)arg1 comparison:(long long)arg2;
+ (id)predicateForMemberOfSmartGroup:(id)arg1 comparison:(long long)arg2 helper:(CDUnknownBlockType)arg3;
+ (id)predicateByAddingVisibilityClauseToPredicate:(id)arg1;
+ (id)predicateForMemberOfGroup:(id)arg1 comparison:(long long)arg2 implClass:(Class)arg3 context:(id)arg4 basePersistenceURL:(id)arg5;

@end

