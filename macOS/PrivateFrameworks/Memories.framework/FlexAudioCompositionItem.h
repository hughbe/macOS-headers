//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/MovieCompositionItem.h>

@class FlexAudioClip;

__attribute__((visibility("hidden")))
@interface FlexAudioCompositionItem : MovieCompositionItem
{
}

- (id)segmentsForFMTrack:(id)arg1 andTimeRange:(CDStruct_e83c9415)arg2;
- (id)trackInfoDict;
- (id)audioTrackSegmentsForDestinationTime:(CDStruct_1b6d18a9)arg1;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithClip:(id)arg1;

// Remaining properties
@property(retain, nonatomic) FlexAudioClip *clip; // @dynamic clip;

@end

