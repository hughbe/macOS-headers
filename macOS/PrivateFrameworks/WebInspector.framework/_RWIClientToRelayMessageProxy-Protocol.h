//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol _RWIClientToRelayMessageProxy

@optional
- (void)_rpc_debuggerDidWake:(NSDictionary *)arg1;
- (void)_rpc_debuggerWillSleep:(NSDictionary *)arg1;
- (void)_rpc_requestApplicationLaunch:(NSDictionary *)arg1;
- (void)_rpc_forwardAutomationSessionRequest:(NSDictionary *)arg1;
- (void)_rpc_getConnectedDrivers:(NSDictionary *)arg1;
- (void)_rpc_forwardDriverStateChangeRequest:(NSDictionary *)arg1;
- (void)_rpc_reportDriverDisconnected:(NSDictionary *)arg1;
- (void)_rpc_reportDriverUpdated:(NSDictionary *)arg1;
- (void)_rpc_reportDriverConnected:(NSDictionary *)arg1;
- (void)_rpc_forwardAutomaticInspectionRejection:(NSDictionary *)arg1;
- (void)_rpc_forwardAutomaticInspectionConfiguration:(NSDictionary *)arg1;
- (void)_rpc_getConnectedApplications:(NSDictionary *)arg1;
- (void)_rpc_forwardSocketSetup:(NSDictionary *)arg1;
- (void)_rpc_forwardSocketData:(NSDictionary *)arg1;
- (void)_rpc_forwardIndicateWebView:(NSDictionary *)arg1;
- (void)_rpc_forwardGetListing:(NSDictionary *)arg1;
- (void)_rpc_forwardDidClose:(NSDictionary *)arg1;
- (void)_rpc_reportIdentifier:(NSDictionary *)arg1;
@end

