//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSUISafariSandboxBrokerConnection.h>

#import <Safari/SafariSandboxBrokerProtocol-Protocol.h>

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SafariSandboxBrokerConnection : WBSUISafariSandboxBrokerConnection <SafariSandboxBrokerProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)migrateResourcesToSandbox:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asynchronouslyMigrateResourcesToSandbox:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelUnarchivingOperationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)extractArchiveAtPath:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeWebArchiveWithoutQuarantineFlag:(id)arg1 atURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)synchronouslyIssueExtensionForDirectoryContainingDownloadDestinationAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)issueRootExtensionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)issueDevelopModeExtensionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_establishSynchronousConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_connectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

