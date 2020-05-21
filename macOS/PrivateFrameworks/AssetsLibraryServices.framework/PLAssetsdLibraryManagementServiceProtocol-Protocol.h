//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSData, NSURL;

@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>
- (void)closeAndDeletePhotoLibraryAtURL:(NSURL *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getPhotoLibraryURLsWithReply:(void (^)(NSURL *, NSURL *, NSError *))arg1;
- (void)getActivePhotoLibrariesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)setSystemPhotoLibraryURL:(NSURL *)arg1 sandboxExtension:(NSData *)arg2 options:(unsigned short)arg3 reply:(void (^)(NSError *))arg4;
@end

