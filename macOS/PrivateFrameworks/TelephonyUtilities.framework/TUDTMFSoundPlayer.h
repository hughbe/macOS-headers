//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUDTMFSoundPlayer : NSObject
{
    CDUnknownBlockType _playSystemSoundHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType playSystemSoundHandler; // @synthesize playSystemSoundHandler=_playSystemSoundHandler;
- (void)attemptToPlaySoundType:(long long)arg1;
- (BOOL)attemptToPlayKey:(unsigned char)arg1;
- (id)init;

@end

