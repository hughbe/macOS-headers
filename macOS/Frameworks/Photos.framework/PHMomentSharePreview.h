//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLMomentSharePreviewData, NSArray, NSData, NSString, PHAsset;

@interface PHMomentSharePreview : NSObject
{
    CPLMomentSharePreviewData *_previewData;
    NSData *_thumbnailImageData;
    NSArray *_previewImageData;
    PHAsset *_keyAsset;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(copy, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSArray *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
- (id)description;
@property(readonly, nonatomic) NSString *keyAssetIdentifier;
- (id)initWithThumbnailImageData:(id)arg1 previewData:(id)arg2;

@end

