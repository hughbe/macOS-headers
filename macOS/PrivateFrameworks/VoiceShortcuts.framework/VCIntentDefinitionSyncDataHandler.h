//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/VCSyncDataHandler.h>

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler
{
    VCDaemonXPCEventHandler *_eventHandler;
}

+ (id)syncDirectoryURLForBundleIdentifier:(id)arg1;
+ (id)definitionDirectoryURL;
+ (int)messageType;
- (void).cxx_destruct;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (BOOL)deleteSyncedData:(id *)arg1;
- (BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;
- (BOOL)resetSyncStateForService:(id)arg1 error:(id *)arg2;
- (BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (void)installedApplicationsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithEventHandler:(id)arg1;

@end

