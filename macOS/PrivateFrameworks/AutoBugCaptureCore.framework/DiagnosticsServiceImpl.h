//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AutoBugCaptureCore/DiagnosticsServiceInterface-Protocol.h>
#import <AutoBugCaptureCore/NSXPCListenerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DiagnosticsServiceImpl : NSObject <NSXPCListenerDelegate, DiagnosticsServiceInterface>
{
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *allowanceCache;
}

- (void).cxx_destruct;
- (void)cloudKitUploadDecisionForCaseIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)uploadRecentCases:(unsigned long long)arg1;
- (void)uploadCasesWithIdentifiersToCloudKit:(id)arg1;
- (void)purgeAutoBugCaptureFilesWithSubPaths:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getAutoBugCaptureConfiguration:(CDUnknownBlockType)arg1;
- (void)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getExpertSystemsStatus:(CDUnknownBlockType)arg1;
- (void)resetAllWithReply:(CDUnknownBlockType)arg1;
- (void)resetDiagnosticCaseUsageWithReply:(CDUnknownBlockType)arg1;
- (void)resetDiagnosticCaseStorageWithReply:(CDUnknownBlockType)arg1;
- (void)getCasesListFromIdentifier:(id)arg1 count:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getSessionStatisticsWithReply:(CDUnknownBlockType)arg1;
- (void)triggerRemoteSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)cancelSession:(id)arg1;
- (void)endSession:(id)arg1;
- (void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startSessionWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (void)snapshotWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (void)abcEnabledAndReadyWithReply:(CDUnknownBlockType)arg1;
- (BOOL)validateSignature:(id)arg1;
- (id)responseDictWithSuccess:(BOOL)arg1 sessionId:(id)arg2;
- (id)responseDictWithSuccess:(BOOL)arg1 reasonCode:(long long)arg2;
- (id)responseDictWithSuccess:(BOOL)arg1 sessionId:(id)arg2 groupId:(id)arg3 additionalDict:(id)arg4 reasonCode:(long long)arg5;
- (void)shutdown;
- (id)initWithQueue:(id)arg1;
- (_Bool)assertEntitlement:(id)arg1 entitlement:(id)arg2 private:(BOOL)arg3;
- (BOOL)_checkRateLimitForAllowance:(id)arg1 time:(id)arg2;
- (BOOL)_checkRateLimitForConnection:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

