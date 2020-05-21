//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface TIImageCacheClient : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    BOOL _hasLocalAccess;
    int _remoteQueryCount;
    BOOL _shouldIdleWhenDone;
    NSCache *_cache;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    NSObject<OS_dispatch_queue> *_storeImageQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSXPCConnection *_connection;
    BOOL _lockOnRead;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL lockOnRead; // @synthesize lockOnRead=_lockOnRead;
- (void)_setCacheVersion:(int)arg1;
- (int)_cacheVersion;
- (id)_versionPath;
- (void)purge;
- (unsigned long long)imageCount;
- (id)imagePath;
- (void)removeImagesInGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_idleIfNecessary:(BOOL)arg1;
- (void)idleAfter:(double)arg1;
- (void)setIdleWhenDone;
- (void)_createConnectionIfNecessary;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3;
- (struct _img)_imgForItem:(id)arg1;
- (void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_createStorageQueueIfNecessary;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (BOOL)imageExistsForKey:(id)arg1 inGroup:(id)arg2;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (id)cacheNumberForKey:(id)arg1 inGroup:(id)arg2;
@property(nonatomic) unsigned long long cacheItemLimit;
@property(readonly, nonatomic) int cacheVersion;
- (void)dealloc;
- (id)initWithLocalAccess:(BOOL)arg1;

@end

