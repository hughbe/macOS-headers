//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteLineObserverProtocol-Protocol.h>

@class VKRouteLine;

__attribute__((visibility("hidden")))
@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol>
{
    struct LabelTransitSupport *_transitSupport;
    VKRouteLine *_routeLine;
}

- (void)routeLineDidUpdateSections:(id)arg1;
- (void)dealloc;
- (id)initWithTransitSupport:(struct LabelTransitSupport *)arg1 andRouteLine:(id)arg2;

@end

