//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Memories/FlexSongAssetProviderProtocol-Protocol.h>

@class NSString;

@interface FlexSongAssetProvider_V2 : NSObject <FlexSongAssetProviderProtocol>
{
    NSString *_rootFolderPath;
    NSString *_audioFileExtension;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *audioFileExtension; // @synthesize audioFileExtension=_audioFileExtension;
@property(retain, nonatomic) NSString *rootFolderPath; // @synthesize rootFolderPath=_rootFolderPath;
- (id)urlToAudioForSegment:(id)arg1;
- (id)urlToAudioContainerForSegmentType:(unsigned long long)arg1;
- (id)_folderNameForSegmentType:(unsigned long long)arg1;
- (id)urlToRoot;
- (BOOL)assetsAreLocal;
- (id)initWithFolderPath:(id)arg1 audioFileExtension:(id)arg2;

@end

