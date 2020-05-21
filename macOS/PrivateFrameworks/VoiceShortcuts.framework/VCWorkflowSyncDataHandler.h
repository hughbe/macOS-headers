//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/VCDatabaseSyncDataHandler.h>

@interface VCWorkflowSyncDataHandler : VCDatabaseSyncDataHandler
{
}

+ (int)messageType;
- (BOOL)resetSyncStateForService:(id)arg1 error:(id *)arg2;
- (BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (id)initWithDatabase:(id)arg1;

@end

