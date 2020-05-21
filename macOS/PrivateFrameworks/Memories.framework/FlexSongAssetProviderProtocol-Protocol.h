//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FlexSegment, NSString, NSURL;

@protocol FlexSongAssetProviderProtocol
- (void)setAudioFileExtension:(NSString *)arg1;
- (NSString *)audioFileExtension;
- (NSURL *)urlToAudioForSegment:(FlexSegment *)arg1;
- (NSURL *)urlToAudioContainerForSegmentType:(unsigned long long)arg1;
- (NSURL *)urlToRoot;
@end

