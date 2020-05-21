//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TLSystemSound : NSObject
{
    unsigned int _soundID;
    BOOL _shouldDisposeOfSoundID;
    BOOL _requiresLongFormPlayback;
    NSURL *_soundFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresLongFormPlayback; // @synthesize requiresLongFormPlayback=_requiresLongFormPlayback;
@property(readonly, nonatomic) NSURL *soundFileURL; // @synthesize soundFileURL=_soundFileURL;
@property(readonly, nonatomic) unsigned int soundID;
- (id)description;
- (void)dealloc;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned int)arg2 requiresLongFormPlayback:(BOOL)arg3;

@end

