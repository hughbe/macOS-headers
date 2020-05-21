//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetTrack, AVPlayerItemTrackInternal, NSString;

@interface AVPlayerItemTrack : NSObject
{
    AVPlayerItemTrackInternal *_playerItemTrack;
}

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (void)_transferCachedValuesToFig;
- (void)_transferHapticVolumeToFig;
- (float)hapticVolume;
- (void)setHapticVolume:(float)arg1;
- (void)_transferActiveHapticChannelIndexToFig;
- (long long)activeHapticChannelIndex;
- (void)setActiveHapticChannelIndex:(long long)arg1;
- (void)setDisableColorMatching:(BOOL)arg1;
- (void)_transferDisableColorMatchingToFig;
- (BOOL)disableColorMatching;
- (void)setVideoEnhancementFilterOptions:(id)arg1;
- (void)_transferVideoEnhancementOptionsToFig;
- (id)videoEnhancementFilterOptions;
- (void)setLoudnessInfo:(id)arg1;
- (void)_transferLoudnessInfoToFig;
- (id)effectiveLoudnessInfo;
- (id)loudnessInfo;
@property(copy, nonatomic) NSString *videoFieldMode;
- (void)_transferVideoFieldModeToFig;
@property(readonly, nonatomic) float currentVideoFrameRate;
- (id)fallbackTrack;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)_transferEnabledToFig;
@property(readonly, nonatomic) AVAssetTrack *assetTrack;
- (int)trackID;
- (id)_playerItem;
- (id)_weakReferenceToPlayerItem;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;

@end

