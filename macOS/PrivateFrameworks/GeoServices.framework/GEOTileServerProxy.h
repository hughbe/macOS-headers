//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration, NSLocale;
@protocol GEOTileServerProxyDelegate, OS_dispatch_queue;

@interface GEOTileServerProxy : NSObject
{
    id <GEOTileServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    int _resourceNotificationToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <GEOTileServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1;
- (void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const struct _GEOTileKey *)arg2 options:(unsigned long long)arg3;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;
- (unsigned long long)calculateFreeableSizeSync;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)calculateFreeableSize;
- (void)flushPendingWrites;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2 batchID:(int)arg3;
- (void)cancel:(const struct _GEOTileKey *)arg1 batchID:(int)arg2;
- (void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned int *)arg3 hasAdditionalInfos:(const _Bool *)arg4 additionalInfos:(const struct GEOTileLoaderAdditionalInfo *)arg5 signpostIDs:(const unsigned long long *)arg6 createTimes:(const double *)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;

@end

