//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@interface CPLScopeUpdateTask : CPLEngineMultiscopeSyncTask
{
}

- (id)taskIdentifier;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;

@end

