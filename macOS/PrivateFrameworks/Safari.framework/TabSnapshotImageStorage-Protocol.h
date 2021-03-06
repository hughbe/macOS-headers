//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSImage, NSSet, NSString, NSURL;

@protocol TabSnapshotImageStorage
- (void)finalizePendingOperationsBeforeTermination;
- (void)purgeImagesSavedOnOrAfter:(NSDate *)arg1 completionHandler:(void (^)(void))arg2;
- (void)deleteImagesWithOriginURLs:(NSSet *)arg1 completionHandler:(void (^)(void))arg2;
- (void)deleteImagesWithUniqueIdentifiers:(NSSet *)arg1 completionHandler:(void (^)(void))arg2;
- (void)loadImageWithUniqueIdentifier:(NSString *)arg1 completionHandler:(void (^)(long long, NSImage *))arg2;
- (void)saveImage:(NSImage *)arg1 withUniqueIdentifier:(NSString *)arg2 creationDate:(NSDate *)arg3 originURL:(NSURL *)arg4 completionHandler:(void (^)(long long))arg5;
- (void)setUpWithCompletionHandler:(void (^)(long long))arg1;
@end

