//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface IrisVideoMetadataExtractor : NSObject
{
    BOOL saveAllMetadata;
    BOOL processedFile;
    NSMutableDictionary *videoTrackMetadataDict;
    AVAsset *inMovieAsset;
    NSMutableArray *desiredIrisKeysArray;
    NSDictionary *allMetadata;
    NSArray *_framesMetadataArray;
}

- (void).cxx_destruct;
@property(readonly) NSArray *framesMetadataArray; // @synthesize framesMetadataArray=_framesMetadataArray;
@property BOOL processedFile; // @synthesize processedFile;
@property(readonly) NSDictionary *allMetadata; // @synthesize allMetadata;
@property BOOL saveAllMetadata; // @synthesize saveAllMetadata;
@property(retain) NSMutableArray *desiredIrisKeysArray; // @synthesize desiredIrisKeysArray;
@property(retain) AVAsset *inMovieAsset; // @synthesize inMovieAsset;
@property(readonly) NSMutableDictionary *videoTrackMetadataDict; // @synthesize videoTrackMetadataDict;
- (int)processFile;
- (int)processStillFrameTimeForAsset:(id)arg1 toDictionary:(id)arg2;
- (int)processVideoTrack:(id)arg1;
- (int)AddInfoFromMetadata:(id)arg1 withTimeStamp:(CDStruct_1b6d18a9)arg2 toArray:(id)arg3;
- (void)AddFrameDictionary:(id)arg1 withCMTime:(CDStruct_1b6d18a9)arg2 toArray:(id)arg3;
- (id)init;

@end

