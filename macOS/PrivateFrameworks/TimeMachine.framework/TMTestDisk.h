//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TMDiskArbiter;

@interface TMTestDisk : NSObject
{
    TMDiskArbiter *_diskArbiter;
    NSString *_volumeName;
    unsigned int _fsType;
    unsigned int _diskType;
    unsigned long long _capacity;
    NSString *_baseDevice;
    NSString *_apfsPhysicalDevice;
    NSString *_apfsContainerDevice;
    NSString *_apfsFirstVolumeDevice;
    struct __DADisk *_baseDiskRef;
    struct __DADisk *_mountDiskRef;
    BOOL _hasFileSystem;
    NSURL *_mountPointURL;
    NSString *_stdout;
    NSString *_stderr;
}

+ (id)apfsPhysicalStoresWholeDiskBSDNamesForAPFSVolumeBSDName:(id)arg1 arbiter:(id)arg2;
+ (id)_apfsPhysicalStoresForAPFSVolume:(struct __DADisk *)arg1 arbiter:(id)arg2;
+ (struct __DADisk *)_apfsVolumeForContainer:(struct __DADisk *)arg1 arbiter:(id)arg2;
+ (struct __DADisk *)_apfsContainerForPhysicalStore:(struct __DADisk *)arg1 arbiter:(id)arg2;
@property(copy) NSString *__stderrp; // @synthesize __stderrp=_stderr;
@property(copy) NSString *__stdoutp; // @synthesize __stdoutp=_stdout;
@property(readonly) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly) unsigned int diskType; // @synthesize diskType=_diskType;
@property(readonly) unsigned int fileSystemType; // @synthesize fileSystemType=_fsType;
@property(readonly) NSString *apfsFirstVolumeDevice; // @synthesize apfsFirstVolumeDevice=_apfsFirstVolumeDevice;
@property(readonly) NSString *apfsContainerDevice; // @synthesize apfsContainerDevice=_apfsContainerDevice;
@property(readonly) NSString *apfsPhysicalDevice; // @synthesize apfsPhysicalDevice=_apfsPhysicalDevice;
@property(copy) NSString *baseDevice; // @synthesize baseDevice=_baseDevice;
@property(retain) NSURL *mountPointURL; // @synthesize mountPointURL=_mountPointURL;
@property(readonly) NSString *volumeName; // @synthesize volumeName=_volumeName;
@property(readonly) TMDiskArbiter *arbiter; // @synthesize arbiter=_diskArbiter;
- (BOOL)detach;
- (void)forceUnmountAllVolumesAndSnapshots;
- (BOOL)unmount;
- (BOOL)_mountFileSystem;
- (BOOL)constructFileSystem;
- (BOOL)constructAPFSContainer;
- (int)runTask:(id)arg1;
- (void)stderrCompleted:(id)arg1;
- (void)stdoutCompleted:(id)arg1;
- (id)_attachNewDeviceWithCapacity:(unsigned long long)arg1;
- (BOOL)mount;
- (BOOL)attach;
@property(readonly) BOOL isMounted;
@property(readonly) BOOL isAttached;
- (void)_setMountDiskRef:(struct __DADisk *)arg1;
- (void)_setBaseDiskRef:(struct __DADisk *)arg1;
@property(readonly) NSString *mountPoint;
- (void)dealloc;
- (id)initWithVolumeName:(id)arg1 fileSystemType:(unsigned int)arg2 capacity:(unsigned long long)arg3 arbiter:(id)arg4;
- (id)initWithVolumeName:(id)arg1 capacity:(unsigned long long)arg2 arbiter:(id)arg3;

@end

