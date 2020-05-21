//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOConfigChangeListenerDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, geo_isolater;
@protocol OS_dispatch_source;

@interface GEODataRequestThrottler : NSObject <GEOConfigChangeListenerDelegate>
{
    geo_isolater *_isolation;
    NSDictionary *_defaultThrottlePolicy;
    NSDictionary *_globalThrottlePolicy;
    BOOL _throttlePoliciesCached;
    NSMutableDictionary *_throttlers;
    NSObject<OS_dispatch_source> *_updateStateTimer;
    int _defaultChangedNotification;
    id _networkChangedNotification;
    unsigned char _throttleEventLogLevel;
}

+ (id)sharedThrottler;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_updateSavedState:(id)arg1;
- (void)_pruneThrottlers;
- (void)_reset;
- (void)reset;
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;
- (void)pruneThrottlers;
- (id)throttlerForKeyPath:(id)arg1;
- (void)_withThrottlersForKey:(struct GEOThrottleKey)arg1 auditToken:(id)arg2 do:(CDUnknownBlockType)arg3;
- (void)getInfoForRequest:(CDStruct_d1a7ebee)arg1 client:(id)arg2 timeUntilNextReset:(double *)arg3 availableRequestCount:(unsigned int *)arg4;
- (BOOL)allowRequest:(CDStruct_d1a7ebee)arg1 forClient:(id)arg2 throttlerToken:(id *)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

