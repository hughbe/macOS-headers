//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSUISafariSandboxBroker.h>

#import <Safari/SafariSandboxBrokerProtocol-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_group;

@interface SafariSandboxBroker : WBSUISafariSandboxBroker <SafariSandboxBrokerProtocol>
{
    NSMutableDictionary *_unarchivingOperations;
    NSObject<OS_dispatch_group> *_archiveGroup;
}

- (void).cxx_destruct;
- (void)migrateResourcesToSandbox:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelUnarchivingOperationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)extractArchiveAtPath:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeWebArchiveWithoutQuarantineFlag:(id)arg1 atURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)synchronouslyIssueExtensionForDirectoryContainingDownloadDestinationAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)issueRootExtensionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)issueDevelopModeExtensionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_isDeveloperModeEnabled;
- (id)_URLsRelatedToURL:(id)arg1 containingOriginalURL:(char *)arg2;
- (BOOL)_canHostWriteFileAtURL:(id)arg1;
- (void)_addFileExtensionToMigratedResources:(id)arg1 forURL:(id)arg2 migrationType:(unsigned long long)arg3 permissions:(long long)arg4;
- (void)dealloc;
- (id)initWithPID:(int)arg1 auditToken:(CDStruct_6ad76789)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

