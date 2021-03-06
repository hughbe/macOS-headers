//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetExportRequest.h>

@class NSObject, NSProgress, PHResourceDownloadRequest;
@protocol OS_dispatch_queue;

@interface PHInternalAssetExportRequest : PHAssetExportRequest
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHResourceDownloadRequest *_downloadRequest;
    NSProgress *_downloadRequestProgressParent;
}

+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id *)arg3;
+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
+ (id)_variantsForAsset:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long *)arg2 isProcessingRequired:(char *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;
- (id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3 downloadRequestProgressParent:(id)arg4;

@end

