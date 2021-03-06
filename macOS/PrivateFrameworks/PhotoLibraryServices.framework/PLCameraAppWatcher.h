//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class NSString, PLForegroundMonitor;

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate>
{
    BOOL _isCameraRunning;
    PLForegroundMonitor *_foregroundMonitor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PLForegroundMonitor *foregroundMonitor; // @synthesize foregroundMonitor=_foregroundMonitor;
@property(readonly, nonatomic) BOOL isCameraRunning; // @synthesize isCameraRunning=_isCameraRunning;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

