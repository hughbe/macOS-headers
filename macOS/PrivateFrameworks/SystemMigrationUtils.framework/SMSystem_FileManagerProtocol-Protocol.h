//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString, NSURL;

@protocol SMSystem_FileManagerProtocol
@property(readonly) NSString *productVersion;
@property(readonly) NSURL *userHomeRoot;
@property(readonly) NSURL *userContentRoot;
@property(readonly) NSURL *slash;
@property(readonly, getter=isFileSystemReady) BOOL fileSystemReady;
- (NSDictionary *)bundleInformationAtPaths:(NSArray *)arg1;
- (NSDictionary *)resourceValuesForKeys:(NSArray *)arg1 onPaths:(NSArray *)arg2 error:(id *)arg3;
- (NSURL *)pathToRemoteFile:(NSURL *)arg1 exists:(char *)arg2 makeAvailable:(BOOL)arg3;
- (void)cleanup;
- (BOOL)activate;
@end

