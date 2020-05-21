//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdServiceCreating-Protocol.h>

@class NSData, NSURL, PLDaemonJob;

@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating>
- (void)bindToPhotoLibraryURL:(NSURL *)arg1 bookmark:(NSData *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)bindToPhotoLibraryURL:(NSURL *)arg1 sandboxExtension:(NSData *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(BOOL)arg2 withReply:(void (^)(NSError *, PLDaemonJobReply *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(BOOL)arg2;
@end

