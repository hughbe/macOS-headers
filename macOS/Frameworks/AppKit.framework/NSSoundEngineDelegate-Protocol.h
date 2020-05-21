//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSString, NSURL;
@protocol NSSoundEngine;

@protocol NSSoundEngineDelegate
- (BOOL)shouldLoopForSoundEngine:(id <NSSoundEngine>)arg1;
- (double)volumeForSoundEngine:(id <NSSoundEngine>)arg1;
- (NSArray *)channelMappingForSoundEngine:(id <NSSoundEngine>)arg1;
- (NSString *)deviceUIDForSoundEngine:(id <NSSoundEngine>)arg1;
- (NSData *)dataForSoundEngine:(id <NSSoundEngine>)arg1;
- (NSURL *)URLForSoundEngine:(id <NSSoundEngine>)arg1;
- (void)soundEngineDidFinishPlaying:(id <NSSoundEngine>)arg1;
@end

