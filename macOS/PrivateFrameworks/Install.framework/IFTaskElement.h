//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

#import <Install/IFTaskProgress-Protocol.h>

@class IFPackageController, NSLock, NSString, NSTask;

@interface IFTaskElement : IFInstallQueueElement <IFTaskProgress>
{
    NSTask *_myTask;
    BOOL _taskIsRunning;
    int _taskStatus;
    int _installKey;
    NSLock *_callbackLock;
    BOOL _writingFiles;
    id _stateDelegate;
    IFPackageController *_pkgController;
    NSString *_pkgTitle;
}

- (oneway void)noteMessage:(in bycopy id)arg1 percentCompleted:(in float)arg2;
- (void)taskTerminatedWithStatus:(int)arg1;
- (oneway void)noteFile:(bycopy id)arg1 kilobytesCompleted:(unsigned int)arg2;
- (int)taskStatus;
- (void)setTaskEnvironment;
- (long long)run;
- (void)setPackageController:(id)arg1;
- (void)setStateDelegate:(id)arg1;
- (void)setTask:(id)arg1;
- (void)dealloc;
- (id)init;

@end

