//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol OS_xpc_object;

@interface CSAudioChunk : NSObject
{
    NSData *_data;
    unsigned long long _numChannels;
    unsigned long long _numSamples;
    unsigned long long _sampleByteDepth;
    unsigned long long _startSampleCount;
    unsigned long long _hostTime;
    NSData *_remoteVAD;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *remoteVAD; // @synthesize remoteVAD=_remoteVAD;
@property(readonly, nonatomic) unsigned long long hostTime; // @synthesize hostTime=_hostTime;
@property(readonly, nonatomic) unsigned long long startSampleCount; // @synthesize startSampleCount=_startSampleCount;
@property(readonly, nonatomic) unsigned long long sampleByteDepth; // @synthesize sampleByteDepth=_sampleByteDepth;
@property(readonly, nonatomic) unsigned long long numSamples; // @synthesize numSamples=_numSamples;
@property(readonly, nonatomic) unsigned long long numChannels; // @synthesize numChannels=_numChannels;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3;
@property(readonly, nonatomic) BOOL remoteVADAvailable;
- (id)dataWithRemoteVADWithScaleFactor:(float)arg1 numAudioSamplesPerRemoteVAD:(unsigned long long)arg2;
- (id)dataForChannel:(unsigned long long)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
- (id)initWithXPCObject:(id)arg1;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 remoteVAD:(id)arg7;
- (id)_fidesRecordInfo;

@end

