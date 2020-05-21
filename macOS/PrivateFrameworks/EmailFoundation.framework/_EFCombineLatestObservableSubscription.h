//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray, NSMutableIndexSet;

@interface _EFCombineLatestObservableSubscription : NSObject
{
    NSLock *_lock;
    NSArray *_observables;
    NSMutableArray *_results;
    NSMutableArray *_tokens;
    NSMutableIndexSet *_activeIndexes;
    NSMutableIndexSet *_silentIndexes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableIndexSet *silentIndexes; // @synthesize silentIndexes=_silentIndexes;
@property(retain, nonatomic) NSMutableIndexSet *activeIndexes; // @synthesize activeIndexes=_activeIndexes;
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(copy, nonatomic) NSArray *observables; // @synthesize observables=_observables;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3;
- (void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;
- (void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;

@end

