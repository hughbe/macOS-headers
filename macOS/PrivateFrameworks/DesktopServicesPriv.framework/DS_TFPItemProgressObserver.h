//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DS_TFPItemProgressObserver : NSObject
{
    struct TNodePtr _node;
    TNSRef_b16f0fdb _progress;
    struct vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>> _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithNode:(struct TNode *)arg1 forProgress:(id)arg2;

@end

