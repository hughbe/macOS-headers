//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSMutableArray, NSObject;

@interface NSAutounbinder : NSProxy
{
    NSObject *_bindingTarget;
    BOOL _isRetainingBindingTarget;
    BOOL _isRecordingBindings;
    NSMutableArray *_bindingsToThisObject;
    NSMutableArray *_observancesOfThisObject;
}

- (id)_autounbinder;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (BOOL)validateValue:(id *)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)retainBindingTargetAndUnbind;
- (void)removeBinding:(id)arg1 fromObject:(id)arg2;
- (void)addBinding:(id)arg1 fromObject:(id)arg2 isWeak:(BOOL)arg3;
- (void)addBinding:(id)arg1 fromObject:(id)arg2;
- (id)bindingTarget;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithBindingTarget:(id)arg1;

@end

