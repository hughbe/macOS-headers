//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray, NSDictionary;
@protocol AVVideoCompositing;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput
{
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_videoCompositionProcessorColorProperties;
- (id)_formatDescriptions;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
- (id)_errorForOSStatus:(int)arg1;
- (id)_asset;
- (id)mediaType;
@property(readonly, nonatomic) id <AVVideoCompositing> customVideoCompositor;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;
- (void)_setVideoComposition:(id)arg1;
@property(readonly, nonatomic) NSDictionary *videoSettings;
@property(readonly, nonatomic) NSArray *videoTracks;
- (id)description;
- (BOOL)alwaysCopiesSampleData;
- (void)dealloc;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (id)init;

@end

