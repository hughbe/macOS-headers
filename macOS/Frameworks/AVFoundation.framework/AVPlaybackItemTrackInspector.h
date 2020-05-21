//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (float)peakDataRate;
- (float)estimatedDataRate;
- (CDStruct_e83c9415)timeRange;
- (BOOL)isEnabled;
- (id)formatDescriptions;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (id)mediaType;
- (unsigned int)_figMediaType;
- (int)trackID;
- (id)asset;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end

