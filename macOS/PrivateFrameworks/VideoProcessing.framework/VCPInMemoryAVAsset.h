//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVURLAsset.h>

#import <VideoProcessing/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSData, NSString;

@interface VCPInMemoryAVAsset : AVURLAsset <AVAssetResourceLoaderDelegate>
{
    NSData *_data;
}

+ (id)assetWithData:(id)arg1;
- (void).cxx_destruct;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

