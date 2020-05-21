//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation
{
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

+ (BOOL)canBackgroundForCurrentSystemState;
+ (long long)expectedInstallPhaseForRequest:(id)arg1 analyzer:(id)arg2;
- (void)cancel;
- (void)main;
- (BOOL)_updateDYLDSharedCacheInSandboxReturningError:(id *)arg1;
- (id)_pathForTool:(id)arg1;
- (int)installState;
- (BOOL)_shouldUpdateDYLDSharedCache;
- (id)description;
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 updateInSandbox:(BOOL)arg4;

@end

