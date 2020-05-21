//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask
{
    id <CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id <CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)launch;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;

@end

