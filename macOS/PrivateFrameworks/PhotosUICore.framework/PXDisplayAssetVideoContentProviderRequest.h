//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXMediaProvider;
@protocol PXDisplayAsset, PXDisplayAssetVideoContentProviderRequestDelegate;

@interface PXDisplayAssetVideoContentProviderRequest : NSObject
{
    long long _requestID;
    id <PXDisplayAsset> _asset;
    PXMediaProvider *_mediaProvider;
    long long _priority;
    double _loadingProgress;
    id <PXDisplayAssetVideoContentProviderRequestDelegate> _delegate;
}

+ (id)requestWithAsset:(id)arg1 mediaProvider:(id)arg2 priority:(long long)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PXDisplayAssetVideoContentProviderRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (void)dealloc;
- (long long)_streamingVideoIntent;
- (void)_handleMediaProviderResult:(id)arg1 info:(id)arg2;
- (void)_handleLoadingProgress:(double)arg1;
- (void)_start;
- (void)cancel;

@end

