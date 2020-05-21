//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoader, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVAssetClientURLRequestHelper : NSObject
{
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToAsset;
    CDUnknownBlockType _figAssetProvider;
    AVWeakReference *_weakReferenceToResourceLoader;
}

@property(copy, nonatomic) CDUnknownBlockType figAssetProvider; // @synthesize figAssetProvider=_figAssetProvider;
@property(nonatomic) __weak AVAssetResourceLoader *resourceLoader;
@property(readonly, nonatomic) const struct OpaqueFigAsset *figAsset;
- (id)URLAsset;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

