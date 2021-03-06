//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoKit/NSObject-Protocol.h>

@class NUAVPlayerController;

@protocol NUAVPlayerControllerDelegate <NSObject>
- (void)playerController:(NUAVPlayerController *)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (void)playerControllerDidFinishPlaying:(NUAVPlayerController *)arg1 duration:(double)arg2;
- (void)playerControllerIsReadyForPlayback:(NUAVPlayerController *)arg1;
@end

