//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUI/NSObject-Protocol.h>

@class IMInternalAVAudioPlayer;

@protocol IMInternalAVAudioPlayerDelegate <NSObject>

@optional
- (void)internalAVAudioPlayerDidPrepareAudioForPlaying:(IMInternalAVAudioPlayer *)arg1 successfully:(BOOL)arg2;
- (void)internalAVAudioPlayerDidFinishPlaying:(IMInternalAVAudioPlayer *)arg1 successfully:(BOOL)arg2;
@end

