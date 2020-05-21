//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PackageKit/NSXPCListenerDelegate-Protocol.h>
#import <PackageKit/PKInstallService-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface PKInstallDaemon : NSObject <PKInstallService, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSString *_connectionName;
    NSMutableDictionary *_tokenToInstallDictionary;
    NSMutableDictionary *_tokenToDoneBlockDictionary;
    NSMutableDictionary *_tokenToQualityOfServiceClassDictionary;
    id _currentToken;
    NSMutableArray *_tokenQueue;
    NSMutableDictionary *_validatedAuthorizations;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_queueQueue;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_queue> *_clientNotifyQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _daemonState;
    int _idleCount;
}

+ (BOOL)doingRecursiveInstall;
+ (id)sharedServiceDaemon;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_runIdleTasks;
- (BOOL)_isProvidingPrivilegeEscalation;
- (BOOL)_shouldOnlyInstallSystemSoftwareForRequest:(id)arg1;
- (BOOL)_requestHasValidAuthorization:(id)arg1 allowInteraction:(BOOL)arg2;
- (BOOL)_evaluateSecurityOfRequest:(id)arg1;
- (void)_invokeDoneBlocksForToken:(id)arg1;
- (void)_attachToToken:(id)arg1 withDoneBlock:(CDUnknownBlockType)arg2;
- (BOOL)removeTokenIfPossible:(id)arg1;
- (void)startNextInstallIfNeeded;
- (void)_requestMeetsPolicyForInstallation:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_currentClients;
- (void)purgeableSpaceForOrphanedSandboxesOnVolume:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startPurgeOfSandboxesOnVolume:(id)arg1 purgeAmountNeeded:(unsigned long long)arg2 systemSandboxes:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)arg1 systemSandboxes:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)currentStageStatusOfInstallRequest:(id)arg1 calculatePurgeableSize:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerAuthorizationFromInstallRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)adoptToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)displayNamesForToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)installStatusForToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_queueInstallationForToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)tokenForInstallRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)_descriptionForToken:(id)arg1;
- (void)startListeningForConnectionsToService:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)installDidCancel:(id)arg1;
- (void)installDidFinish:(id)arg1;
- (void)install:(id)arg1 didFailWithError:(id)arg2;
- (void)_installDidEnd;
- (void)installWillFinish:(id)arg1;
- (void)installDidBegin:(id)arg1;
- (void)operationControllerDidChangeInstallState:(int)arg1 withSandbox:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

