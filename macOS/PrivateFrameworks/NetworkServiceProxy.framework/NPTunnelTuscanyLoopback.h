//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnelTuscany.h>

@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany
{
    void *_window;
    NPTunnelFlow *_flow;
}

- (void).cxx_destruct;
@property(retain) NPTunnelFlow *flow; // @synthesize flow=_flow;
@property void *window; // @synthesize window=_window;
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)startConnectionTimer;
- (void)write:(id)arg1;
- (unsigned long long)initialWindowSize;
- (BOOL)selectBestEdge;
- (long long)currentMTU;
- (unsigned long long)maxFrameSize;
- (void)removeFlow:(unsigned long long)arg1;
- (BOOL)addNewFlow:(id)arg1;
- (unsigned int)dayPassSessionCounter;
- (void)createTuscanyClient;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;

@end

