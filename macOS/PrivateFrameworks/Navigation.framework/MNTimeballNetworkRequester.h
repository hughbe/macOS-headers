//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNTimeballNetworkRequester : NSObject
{
}

- (void)_makeETARequestsWithOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)_makeDirectionsRequestsWithOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;

@end

