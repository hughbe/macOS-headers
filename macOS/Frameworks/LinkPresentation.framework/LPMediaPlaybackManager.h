//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPMediaPlaybackManager : NSObject
{
    NSHashTable *_mediaPlayers;
}

+ (id)shared;
- (void).cxx_destruct;
- (BOOL)releaseDecodingResourcesForInactivePlayers;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1;
- (void)mediaPlayer:(id)arg1 didChangeMutedState:(BOOL)arg2;
- (void)mediaPlayer:(id)arg1 didChangePlayingState:(BOOL)arg2;
- (void)removeMediaPlayer:(id)arg1;
- (void)addMediaPlayer:(id)arg1;
- (id)init;

@end

