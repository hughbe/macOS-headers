//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSString;

__attribute__((visibility("hidden")))
@interface CUAudioRequest : NSObject
{
    AVAudioPlayer *_audioPlayer;
    CDUnknownBlockType _completion;
    NSString *_label;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;

@end

