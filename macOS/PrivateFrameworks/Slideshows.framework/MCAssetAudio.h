//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetAudio : MCAsset
{
    NSMutableSet *mSongs;
}

- (void)removeSong:(id)arg1;
- (void)addSong:(id)arg1;
@property(readonly) NSSet *songs;
- (BOOL)isInUse;
- (void)demolish;

@end

