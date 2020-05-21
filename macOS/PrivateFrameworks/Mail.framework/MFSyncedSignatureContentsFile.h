//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFSyncedFile.h>

@class NSString;

@interface MFSyncedSignatureContentsFile : MFSyncedFile
{
    NSString *_uniqueID;
}

+ (id)syncedSignatureContentsFileWithUniqueID:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;
- (void)writeSignatureContents:(id)arg1;
- (id)readSignatureContents;

@end

