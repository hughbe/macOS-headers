//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVBindingInfo : NSObject
{
    BOOL _setToNilWhenUnbinding;
    id _observer;
    NSString *_binding;
    id _observable;
    NSString *_keyPath;
    NSDictionary *_options;
}

- (void).cxx_destruct;
@property BOOL setToNilWhenUnbinding; // @synthesize setToNilWhenUnbinding=_setToNilWhenUnbinding;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property __weak id observable; // @synthesize observable=_observable;
@property(copy) NSString *binding; // @synthesize binding=_binding;
@property(retain) id observer; // @synthesize observer=_observer;
- (id)description;
- (id)initWithObserver:(id)arg1 binding:(id)arg2 observable:(id)arg3 keyPath:(id)arg4 options:(id)arg5 setToNilWhenUnbinding:(BOOL)arg6;

@end

