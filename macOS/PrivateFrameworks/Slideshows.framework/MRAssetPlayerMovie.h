//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MRAssetPlayer.h>

#import <Slideshows/AVPlayerItemOutputPullDelegate-Protocol.h>
#import <Slideshows/MRAssetPlayerTimeSupport-Protocol.h>
#import <Slideshows/MRAudioPlayer-Protocol.h>

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, NSConditionLock, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAssetPlayerMovie : MRAssetPlayer <MRAssetPlayerTimeSupport, MRAudioPlayer, AVPlayerItemOutputPullDelegate>
{
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _movieDuration;
    NSConditionLock *_semaphore;
    unsigned char _orientation;
    BOOL _newImageIsAvailable;
    BOOL _movieIsReadyToPlay;
    BOOL _imageIsThumbnail;
    BOOL _isPlaying;
    BOOL _isMuted;
    double _startTime;
    double _duration;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _volume;
}

@property(nonatomic) BOOL isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)_posterImage:(BOOL)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (id)retainedByUserImageAtTime:(double)arg1 displayLinkTimestamp:(CDStruct_489f4f2f)arg2;
- (void)_finishLoadingAsset:(id)arg1 andVideoTrack:(id)arg2 forTime:(double)arg3;
- (void)_finishLoadingAsset:(id)arg1 forTime:(double)arg2;
- (void)loadForTime:(double)arg1;
- (BOOL)newImageIsAvailable;
@property(nonatomic) double time;
- (void)dealloc;
- (id)initWithPath:(id)arg1 size:(struct CGSize)arg2 master:(id)arg3 andOptions:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

