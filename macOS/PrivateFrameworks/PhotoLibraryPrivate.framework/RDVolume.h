//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDVolumeModel.h>

@class NSString;

@interface RDVolume : RDVolumeModel
{
    NSString *_path;
    struct __DADisk *_disk;
}

+ (BOOL)supportedFileSystemTypeAtPath:(id)arg1;
+ (BOOL)supportedFileSystemTypeAtPath:(id)arg1 forLibraryExport:(BOOL)arg2;
+ (id)newVolumeWithName:(id)arg1 path:(id)arg2 diskUuid:(id)arg3 inDatabase:(id)arg4;
+ (id)allVolumesFromDatabase:(id)arg1;
+ (void)updateOnlineVolumeNamesForDatabase:(id)arg1;
+ (void)deleteVolumes:(id)arg1 withReason:(unsigned short)arg2;
@property(nonatomic) struct __DADisk *disk; // @synthesize disk=_disk;
- (void).cxx_destruct;
- (id)masters;
- (void)masterIds:(CDUnknownBlockType)arg1;
- (id)masterIds;
- (void)deleteVolumeWithReason:(unsigned short)arg1;
- (void)updateName;
- (void)eject;
- (void)unmount;
- (void)mount;
- (BOOL)isEjectable;
- (BOOL)isUnmountable;
- (BOOL)isMountable;
- (void)updateStatus:(id)arg1;
- (void)updateWithInfoRecord:(id)arg1;
- (void)updateWithInfoRecord:(id)arg1 resetUuid:(BOOL)arg2;
- (void)didUnmount;
- (void)didMountAtPath:(id)arg1;
- (id)absolutePathFromRelativePath:(id)arg1;
- (id)relativePathFromAbsolutePath:(id)arg1;
@property(retain, nonatomic) NSString *path;
- (BOOL)isOnline;
- (id)description;
- (struct __DADisk *)localDiskWithUuid:(BOOL)arg1;
- (id)bookmark;
- (CDUnknownBlockType)willPersist;
- (void)dealloc;

@end

