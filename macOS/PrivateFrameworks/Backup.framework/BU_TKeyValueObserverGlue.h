//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BU_TKeyValueObserverGlue : NSObject
{
    function_b1fce659 _functor;
    function_e1076a84 _functorWithChange;
    unordered_set_e17e8012 _observedObjects;
    struct TString _observedKeyPath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initCommon:(const unordered_set_e17e8012 *)arg1 observedKeyPath:(const struct TString *)arg2;
- (id)initWithFunctorWithChange:(const function_e1076a84 *)arg1 observedObjects:(const unordered_set_e17e8012 *)arg2 observedKeyPath:(const struct TString *)arg3;
- (id)initWithFunctor:(const function_b1fce659 *)arg1 observedObjects:(const unordered_set_e17e8012 *)arg2 observedKeyPath:(const struct TString *)arg3;

@end

