//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSound;

@interface TUCallSoundPlayerDescriptor : NSObject
{
    long long _soundType;
    NSSound *_sound;
    unsigned long long _iterations;
    double _pauseDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(retain, nonatomic) NSSound *sound; // @synthesize sound=_sound;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
- (id)description;
- (id)initWithSoundType:(long long)arg1 provider:(id)arg2 video:(BOOL)arg3 region:(long long)arg4;
- (id)initWithSoundType:(long long)arg1 call:(id)arg2;
- (id)initWithSoundType:(long long)arg1 sound:(id)arg2 iterations:(unsigned long long)arg3 pauseDuration:(double)arg4;

@end

