//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/AudioClip.h>

@class FMSong, FMSongRendition;

__attribute__((visibility("hidden")))
@interface FlexAudioClip : AudioClip
{
    BOOL _lockedRendition;
    FMSongRendition *_songRendition;
    FMSong *_song;
}

+ (id)backgroundClipWithSong:(id)arg1;
+ (id)optionsForSong:(id)arg1 withDuration:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL lockedRendition; // @synthesize lockedRendition=_lockedRendition;
@property(retain, nonatomic) FMSong *song; // @synthesize song=_song;
@property(retain, nonatomic) FMSongRendition *songRendition; // @synthesize songRendition=_songRendition;
- (void)outroStingerTime:(CDStruct_1b6d18a9 *)arg1 earlyFadeStartTime:(CDStruct_1b6d18a9 *)arg2 endTime:(CDStruct_1b6d18a9 *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (void)generateEdits;
- (int)rawSourceDuration;
@property(readonly, nonatomic) int sampleRate;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)refreshSong;
- (id)plistRepresentationFromProject:(id)arg1;
- (int)clipType;
- (id)init;
- (id)songUID;
- (void)setSongUID:(id)arg1;

@end

