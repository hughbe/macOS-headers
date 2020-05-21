//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, PXGImageTexture, PXGPayloadTexture;
@protocol NSCopying, OS_dispatch_queue, PXGTextureAtlasManager;

@protocol PXGTextureConverter <NSObject>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property(readonly, nonatomic) BOOL supportsTextureAtlas;
@property(readonly, nonatomic) PXGImageTexture *transparentTexture;
@property(readonly, nonatomic) int presentationType;
- (id <PXGTextureAtlasManager>)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
- (PXGPayloadTexture *)createPayloadTextureFromPayload:(id <NSCopying>)arg1;
- (PXGImageTexture *)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (PXGImageTexture *)createTextureFromCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
@end

