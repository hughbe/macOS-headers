//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLFileSystemVolumeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSFileManager *_fileManager;
    NSMutableDictionary *_mountedVolumeURLsByUuid;
    NSMutableDictionary *_registeredFileSystemVolumesByUuid;
    NSMapTable *_mocsByVolume;
    struct __DASession *_diskArbitrationSession;
}

+ (id)sharedFileSystemVolumeManager;
- (void).cxx_destruct;
- (void)_diskDisappeared:(id)arg1;
- (void)_diskAppeared:(id)arg1;
- (void)_updateMountedVolumeURLs;
- (void)_updateOfflineStates;
- (void)unregisterPLFileSystemVolume:(id)arg1;
- (void)registerPLFileSystemVolume:(id)arg1;
- (id)volumeForURL:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initSharedVolumeManager;

@end

