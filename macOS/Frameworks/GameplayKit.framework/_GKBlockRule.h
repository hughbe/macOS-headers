//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKRule.h>

__attribute__((visibility("hidden")))
@interface _GKBlockRule : GKRule
{
    CDUnknownBlockType _predicate;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
- (void)performActionWithSystem:(id)arg1;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;

@end

