//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSImage, NSString, WBSSiteMetadataImageCache;

@protocol WBSSiteMetadataImageCacheDelegate <NSObject>

@optional
- (NSString *)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 customFileNameForKeyString:(NSString *)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(WBSSiteMetadataImageCache *)arg1;
- (void)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 didRemoveImageFromCacheForKeyString:(NSString *)arg2;
- (void)siteMetadataImageCache:(WBSSiteMetadataImageCache *)arg1 didFinishLoadingImage:(NSImage *)arg2 forKeyString:(NSString *)arg3;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(WBSSiteMetadataImageCache *)arg1;
@end

