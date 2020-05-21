//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIRebuildCachesElement : OSIInstallQueueElement
{
    unsigned long long operatingMode;
}

- (double)estimatedTimeToComplete;
- (id)localizedStatusString;
- (id)operationName;
- (BOOL)_migrateMasterBOMReturningError:(id *)arg1;
- (BOOL)_triggerRebuildOfKernelCache:(id *)arg1;
- (BOOL)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)arg1;
- (BOOL)_triggerRebuildOfDYLDSharedCacheReturningError:(id *)arg1;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1 withMode:(unsigned long long)arg2;

@end

