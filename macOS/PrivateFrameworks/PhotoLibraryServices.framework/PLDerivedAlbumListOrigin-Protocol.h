//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject;
@protocol PLIndexMappingCache;

@protocol PLDerivedAlbumListOrigin
- (void)enumerateDerivedAlbumLists:(void (^)(NSObject<PLIndexMappingCache> *))arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbumList:(NSObject<PLIndexMappingCache> *)arg1;
@end

