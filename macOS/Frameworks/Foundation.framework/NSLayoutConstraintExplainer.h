//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSMutableSet;

@interface NSLayoutConstraintExplainer : NSObject
{
    NSLayoutConstraint *_constraint;
    NSMutableSet *_requiredConstraints;
    NSMutableSet *_frozenConstraints;
    NSMutableSet *_relaxedConstraints;
    NSMapTable *_satisfactionChanges;
    NSMapTable *_priorities;
    NSArray *_mutuallyExclusiveConstraints;
}

@property(retain) NSArray *mutuallyExclusiveConstraints; // @synthesize mutuallyExclusiveConstraints=_mutuallyExclusiveConstraints;
@property(retain) NSMapTable *priorities; // @synthesize priorities=_priorities;
@property(retain) NSMapTable *satisfactionChanges; // @synthesize satisfactionChanges=_satisfactionChanges;
- (id)thawConstraint:(id)arg1;
- (id)freezeConstraint:(id)arg1;
- (id)relaxConstraint:(id)arg1;
- (id)requireConstraint:(id)arg1;
- (id)description;
- (unsigned long long)_satisfactionChangeCount:(CDUnknownBlockType)arg1 withResults:(id *)arg2;
- (void)recalculateExplanation;
- (void)_freezeErrorVariable:(id)arg1 forcingZeroValue:(BOOL)arg2 inEngine:(id)arg3 accumulatingConstraints:(id)arg4 andMutuallyExclusiveConstraints:(id *)arg5;
- (void)dealloc;
- (id)initWithConstraint:(id)arg1;

@end

