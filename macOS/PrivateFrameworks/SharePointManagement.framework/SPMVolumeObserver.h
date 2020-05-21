//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_group, OS_dispatch_queue, SPMVolumeObserverDelegate;

@interface SPMVolumeObserver : NSObject
{
    BOOL _existingVolumeEventsRecieved;
    id <SPMVolumeObserverDelegate> _delegate;
    struct _CFVolumeObserver *_observer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_group> *_initializeGroup;
    NSMutableSet *_internalVolumes;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *internalVolumes; // @synthesize internalVolumes=_internalVolumes;
@property(retain) NSObject<OS_dispatch_group> *initializeGroup; // @synthesize initializeGroup=_initializeGroup;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property BOOL existingVolumeEventsRecieved; // @synthesize existingVolumeEventsRecieved=_existingVolumeEventsRecieved;
@property struct _CFVolumeObserver *observer; // @synthesize observer=_observer;
@property(readonly) id <SPMVolumeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)volumes;
- (void)_notifyDelegateWithVolume:(id)arg1 mounted:(BOOL)arg2;
- (void)_handleVolumeUnountedAtURL:(id)arg1 name:(id)arg2;
- (void)_handleVolumeMountedAtURL:(id)arg1 name:(id)arg2;
- (void)_handleEvent:(unsigned long long)arg1 disk:(struct __DADisk *)arg2 volumeURL:(id)arg3 volumeName:(id)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

