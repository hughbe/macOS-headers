//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFSyncedFile.h>

@interface MFSyncedRulesFile : MFSyncedFile
{
}

+ (id)syncedRulesFile;
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;
- (void)writeRules:(id)arg1;
- (id)readRules;

@end

