//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderOutput, AVAssetTrack, NSArray, NSCondition, NSError;

@interface VideoReader : NSObject
{
    BOOL _readAheadEnable;
    _Bool fullRangeVideo;
    float trackStart;
    float trackLength;
    float readStart;
    float readLength;
    int timeScale;
    float fps;
    unsigned int imageWidth;
    unsigned int imageHeight;
    unsigned int _pixelFormatOptions;
    int _readaheadState;
    NSError *lastError;
    NSArray *formatDescriptions;
    AVAsset *asset;
    AVAssetTrack *videoTrack;
    AVAssetReader *assetReader;
    AVAssetReaderOutput *trackOutput;
    struct opaqueCMSampleBuffer *_readaheadBuf;
    NSCondition *_readaheadLock;
    struct opaqueCMSampleBuffer *_lastFrame;
    CDStruct_1b6d18a9 trackStartT;
    CDStruct_1b6d18a9 trackLengthT;
    CDStruct_1b6d18a9 readStartT;
    CDStruct_1b6d18a9 readLengthT;
    CDStruct_1b6d18a9 minFrameDuration;
    CDStruct_1b6d18a9 lastPresentationTime;
    struct CGAffineTransform preferredTransform;
}

- (void).cxx_destruct;
@property struct opaqueCMSampleBuffer *lastFrame; // @synthesize lastFrame=_lastFrame;
@property(retain) NSCondition *readaheadLock; // @synthesize readaheadLock=_readaheadLock;
@property int readaheadState; // @synthesize readaheadState=_readaheadState;
@property struct opaqueCMSampleBuffer *readaheadBuf; // @synthesize readaheadBuf=_readaheadBuf;
@property unsigned int pixelFormatOptions; // @synthesize pixelFormatOptions=_pixelFormatOptions;
@property(readonly) AVAssetReaderOutput *trackOutput; // @synthesize trackOutput;
@property(readonly) AVAssetReader *assetReader; // @synthesize assetReader;
@property(readonly) AVAssetTrack *videoTrack; // @synthesize videoTrack;
@property(readonly) AVAsset *asset; // @synthesize asset;
@property(readonly) CDStruct_1b6d18a9 lastPresentationTime; // @synthesize lastPresentationTime;
@property(readonly) _Bool fullRangeVideo; // @synthesize fullRangeVideo;
@property(readonly) NSArray *formatDescriptions; // @synthesize formatDescriptions;
@property(readonly) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform;
@property(readonly) NSError *lastError; // @synthesize lastError;
@property(readonly) unsigned int imageHeight; // @synthesize imageHeight;
@property(readonly) unsigned int imageWidth; // @synthesize imageWidth;
@property(readonly) CDStruct_1b6d18a9 minFrameDuration; // @synthesize minFrameDuration;
@property(readonly) float fps; // @synthesize fps;
@property(readonly) int timeScale; // @synthesize timeScale;
@property CDStruct_1b6d18a9 readLengthT; // @synthesize readLengthT;
@property CDStruct_1b6d18a9 readStartT; // @synthesize readStartT;
@property float readLength; // @synthesize readLength;
@property(readonly) CDStruct_1b6d18a9 trackLengthT; // @synthesize trackLengthT;
@property(readonly) CDStruct_1b6d18a9 trackStartT; // @synthesize trackStartT;
@property(readonly) float trackLength; // @synthesize trackLength;
@property(readonly) float trackStart; // @synthesize trackStart;
- (int)skipFrames:(unsigned int)arg1;
- (int)reset;
@property(setter=setReadAheadEnable:) BOOL readAheadEnable;
- (int)getFrameAtTime:(CDStruct_1b6d18a9)arg1 exactTime:(BOOL)arg2 frame:(struct opaqueCMSampleBuffer **)arg3;
- (int)getFrameAsSampleBuf:(struct opaqueCMSampleBuffer **)arg1;
- (void)fireReadahead;
- (struct opaqueCMSampleBuffer *)nextSampleBuf;
- (int)getFrame:(struct CGImage **)arg1;
- (int)buildAssetReader;
@property float readStart; // @synthesize readStart;
- (void)dealloc;
- (id)initFromFile:(id)arg1;
- (id)initWithAsset:(id)arg1;

@end

