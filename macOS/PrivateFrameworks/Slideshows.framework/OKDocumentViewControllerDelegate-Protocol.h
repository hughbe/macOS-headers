//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/NSObject-Protocol.h>

@class AVAsset, NSString, NSURL, OKDocumentViewController;

@protocol OKDocumentViewControllerDelegate <NSObject>

@optional
- (void)documentViewControllerDidPrepareForDisplay:(OKDocumentViewController *)arg1;
- (void)documentViewController:(OKDocumentViewController *)arg1 changedFrameOfMainNavigatorTo:(struct CGRect)arg2;
- (void)endFadingForTrackID:(NSString *)arg1;
- (void)beginFadingForTrackID:(NSString *)arg1 fadeDuration:(double)arg2;
- (void)endDuckingForTrackID:(NSString *)arg1;
- (void)beginDuckingForTrackID:(NSString *)arg1 toDuckLevel:(double)arg2 fadeDuration:(double)arg3;
- (void)audioFinishedPlayingForTrackID:(NSString *)arg1;
- (void)audioStartedPlayingForTrackID:(NSString *)arg1 withAVAsset:(AVAsset *)arg2 atVolume:(double)arg3;
- (void)audioStartedPlayingForTrackID:(NSString *)arg1 withMediaURL:(NSURL *)arg2 atVolume:(double)arg3;
- (void)couchPotatoPlaybackFinished;
@end

