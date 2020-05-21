//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetTrack, NSString;

@interface AVAsset (Utilities)
- (BOOL)isMarkedNotSerializable;
- (id)commonMetadataStringValueForKey:(id)arg1;
- (BOOL)valuesForKeysAreFinishedLoading:(id)arg1;
@property(readonly) struct CGSize scaleFactors;
@property(readonly) float mainVideoTrackNominalFrameRate;
@property(readonly) struct CGAffineTransform mainVideoTrackPreferredTransform;
@property(readonly) struct CGSize mainVideoTrackPreferredSize;
@property(readonly) struct CGSize mainVideoTrackNaturalSize;
@property(readonly) AVAssetTrack *mainAudioTrack;
@property(readonly) AVAssetTrack *mainVideoTrack;
@property(readonly) NSString *localizedDisplayName;
- (BOOL)canPassthroughExport;
@end

