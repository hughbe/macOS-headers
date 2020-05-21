//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKArtworkDataSourceCache.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface MKResizedArtworkDataSourceCache : MKArtworkDataSourceCache
{
    CDUnknownBlockType _resizingBlock;
    NSCache *_resizedImageCache;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType resizingBlock; // @synthesize resizingBlock=_resizingBlock;
- (id)_resizedImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)_cacheImage:(id)arg1 forKey:(id)arg2;
- (id)_cachedImageForKey:(id)arg1;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 widthPaddingMultiple:(double)arg6;
- (void)purge;
@property(readonly, copy, nonatomic) NSCache *resizedImageCache; // @synthesize resizedImageCache=_resizedImageCache;
- (id)initWithArtworkManager:(id)arg1 imageResizingBlock:(CDUnknownBlockType)arg2;

@end

