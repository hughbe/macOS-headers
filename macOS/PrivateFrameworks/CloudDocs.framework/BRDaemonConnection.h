//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection
{
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)invalidateCachedURLProperties;
+ (id)cloudDocsCachesURL;
+ (id)cloudDocsAppSupportURL;
+ (id)syncedRootURLs;
+ (id)syncedDocumentsURL;
+ (id)syncedDesktopURL;
+ (id)mobileDocumentsURL;
+ (id)homeDirectoryURL;
+ (void)t_setMobileDocumentsURL:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (id)t_connectionForUUID:(id)arg1;
+ (id)secondaryConnection;
+ (id)secondaryConnectionIfExists;
+ (id)defaultConnection;
+ (id)defaultConnectionIfExists;
+ (void)initialize;
- (void).cxx_destruct;
- (id)newSyncTokenProxy;
- (id)newSyncProxy;
- (void)_setupAndResume;
- (id)initUsingUserLocalDaemonTokenService;
- (id)initUsingUserLocalDaemon;

@end

