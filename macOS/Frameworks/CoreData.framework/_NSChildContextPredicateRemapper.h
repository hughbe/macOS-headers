//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _NSChildContextPredicateRemapper : NSObject
{
    NSManagedObjectContext *_context;
}

- (void)visitPredicateExpression:(id)arg1;
- (id)replacementValueForValue:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

