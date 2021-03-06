//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetService;

__attribute__((visibility("hidden")))
@interface __HMFNetServiceMonitor : HMFNetMonitor
{
    HMFNetService *_service;
}

- (void).cxx_destruct;
@property(readonly) HMFNetService *service; // @synthesize service=_service;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)reachabilityPath;
- (id)netAddress;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;
- (id)initWithNetAddress:(id)arg1;

@end

