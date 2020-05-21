//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteContextObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver>
{
    struct LabelTransitSupport *_transitSupport;
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _routeContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)routeContextStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithRouteContext:(id)arg1 transitSupport:(struct LabelTransitSupport *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

