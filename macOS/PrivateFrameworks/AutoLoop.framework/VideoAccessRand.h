//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetTrack, AVSampleBufferGenerator, AVSampleCursor, VideoDecompressor;

@interface VideoAccessRand : NSObject
{
    unsigned int _recurs;
    AVAsset *asset;
    AVAssetTrack *videoTrack;
    AVSampleBufferGenerator *_sampBufGen;
    VideoDecompressor *_vidDecompr;
    AVSampleCursor *_cursor;
    struct __CFDictionary *_currentChunk;
    CDStruct_1b6d18a9 _frameTime2x;
}

- (void).cxx_destruct;
@property struct __CFDictionary *currentChunk; // @synthesize currentChunk=_currentChunk;
@property unsigned int recurs; // @synthesize recurs=_recurs;
@property CDStruct_1b6d18a9 frameTime2x; // @synthesize frameTime2x=_frameTime2x;
@property(retain) AVSampleCursor *cursor; // @synthesize cursor=_cursor;
@property(retain) VideoDecompressor *vidDecompr; // @synthesize vidDecompr=_vidDecompr;
@property(retain) AVSampleBufferGenerator *sampBufGen; // @synthesize sampBufGen=_sampBufGen;
@property(readonly) AVAssetTrack *videoTrack; // @synthesize videoTrack;
@property(readonly) AVAsset *asset; // @synthesize asset;
- (int)getFrameAtTime:(CDStruct_1b6d18a9)arg1 pixBuf:(struct __CVBuffer **)arg2 actualTime:(CDStruct_1b6d18a9 *)arg3;
- (CDStruct_1b6d18a9)currPresTime;
- (int)decodeFrame:(struct __CVBuffer **)arg1;
- (void)dealloc;
- (id)initFromFile:(id)arg1 pixelFormat:(unsigned int)arg2;

@end

