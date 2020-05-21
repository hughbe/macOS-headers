//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLAssetsdClientSandboxExtensions, PLAssetsdClientXPCConnection, PLAssetsdCloudClient, PLAssetsdCloudInternalClient, PLAssetsdDebugClient, PLAssetsdDemoClient, PLAssetsdDiagnosticsClient, PLAssetsdLibraryClient, PLAssetsdLibraryInternalClient, PLAssetsdLibraryManagementClient, PLAssetsdMigrationClient, PLAssetsdNotificationClient, PLAssetsdPhotoKitClient, PLAssetsdResourceClient, PLAssetsdResourceInternalClient, PLAssetsdResourceWriteOnlyClient, PLAssetsdSyncClient, PLAssetsdSystemLibraryURLReadOnlyClient, PLAutoBindingProxyFactory;
@protocol OS_dispatch_queue;

@interface PLAssetsdClient : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdClientXPCConnection *_connection;
    PLAutoBindingProxyFactory *_autoBindingProxyFactory;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
    PLAssetsdLibraryClient *_libraryClient;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdLibraryInternalClient *_libraryInternalClient;
    PLAssetsdPhotoKitClient *_photoKitClient;
    PLAssetsdResourceClient *_resourceClient;
    PLAssetsdResourceWriteOnlyClient *_resourceWriteOnlyClient;
    PLAssetsdResourceInternalClient *_resourceInternalClient;
    PLAssetsdCloudClient *_cloudClient;
    PLAssetsdCloudInternalClient *_cloudInternalClient;
    PLAssetsdMigrationClient *_migrationClient;
    PLAssetsdSyncClient *_syncClient;
    PLAssetsdNotificationClient *_notificationClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdDiagnosticsClient *_diagnosticsClient;
    PLAssetsdDebugClient *_debugClient;
}

+ (id)sharedSystemLibraryAssetsdClient;
- (void).cxx_destruct;
- (void)prepareToShutdown;
- (void)waitUntilConnectionSendsAllMessages;
- (void)sendDaemonJob:(id)arg1 shouldRunSerially:(BOOL)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_updateLibraryStateConnectionInterrupted:(id)arg1;
@property(readonly) PLAssetsdDebugClient *debugClient;
@property(readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property(readonly) PLAssetsdDemoClient *demoClient;
@property(readonly) PLAssetsdNotificationClient *notificationClient;
@property(readonly) PLAssetsdSyncClient *syncClient;
@property(readonly) PLAssetsdMigrationClient *migrationClient;
@property(readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property(readonly) PLAssetsdCloudClient *cloudClient;
@property(readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
- (id)resourceWriteOnlyClient;
@property(readonly) PLAssetsdResourceClient *resourceClient;
@property(readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property(readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
- (id)systemLibraryURLReadOnlyClient;
@property(readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property(readonly) PLAssetsdLibraryClient *libraryClient;
- (id)_setupClientClass:(Class)arg1 proxyGetter:(SEL)arg2 options:(long long)arg3;
- (void)addPhotoLibraryUnavailabilityHandler:(CDUnknownBlockType)arg1;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (id)init;

@end

