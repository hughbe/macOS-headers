//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent
{
    BOOL _preservesShuffleMode;
}

@property(readonly, nonatomic) BOOL preservesShuffleMode; // @synthesize preservesShuffleMode=_preservesShuffleMode;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

