//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariCore/WBSSQLiteStore.h>

#import <SafariShared/WBSSandboxExtensionStore-Protocol.h>

@interface WBSSandboxExtensionSQLiteStore : WBSSQLiteStore <WBSSandboxExtensionStore>
{
    struct atomic<bool> _opening;
}

- (BOOL)_createFreshDatabaseSchemaWithError:(id *)arg1;
- (int)_createFreshDatabaseSchema;
- (int)_currentSchemaVersion;
- (void)updateBookmarkData:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extensionForURL:(id)arg1 options:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_databaseCreateIfNeeded:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

