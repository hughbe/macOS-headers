//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCClientZone, NSError, NSOutputStream, NSString, NSURL, PBMessageStreamWriter;

@interface BRCPackageManifestWriter : NSObject
{
    BRCClientZone *_clientZone;
    NSString *_stageID;
    PBMessageStreamWriter *_writer;
    NSOutputStream *_stream;
    NSURL *_url;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (BOOL)stagePackageWithReader:(id)arg1 package:(id)arg2 xattrsPackage:(id)arg3 stageItemURL:(id)arg4 livefd:(int)arg5 recordName:(id)arg6;
- (BOOL)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (BOOL)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2;
- (BOOL)done;
- (BOOL)addLocalItem:(id)arg1;
- (BOOL)addItem:(id)arg1;
- (id)initWithZone:(id)arg1 stageID:(id)arg2 url:(id)arg3;
- (void)_handleStreamError;

@end

