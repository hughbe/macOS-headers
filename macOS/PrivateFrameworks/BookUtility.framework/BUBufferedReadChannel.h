//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookUtility/BUReadChannel-Protocol.h>

@class NSArray, NSError, NSString;
@protocol BUReadChannel, BUStreamReadChannel, OS_dispatch_data, OS_dispatch_queue;

@interface BUBufferedReadChannel : NSObject <BUReadChannel>
{
    BOOL _streamOutputDone;
    CDUnknownBlockType _streamReadChannelSourceHandler;
    NSObject<OS_dispatch_queue> *_readQueue;
    id <BUReadChannel> _sourceReadChannel;
    unsigned long long _sourceReadBufferSize;
    long long _sourceOffset;
    unsigned long long _sourceLength;
    NSError *_sourceReadChannelError;
    NSArray *_blockInfos;
    CDUnknownBlockType _streamReadChannelBlock;
    id <BUStreamReadChannel> _streamReadChannel;
    long long _streamOutputOffset;
    unsigned long long _streamOutputOutstandingLength;
    unsigned long long _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_data> *currentStreamOutputData; // @synthesize currentStreamOutputData=_currentStreamOutputData;
@property(nonatomic) unsigned long long streamOutputLength; // @synthesize streamOutputLength=_streamOutputLength;
@property(nonatomic) unsigned long long streamOutputOutstandingLength; // @synthesize streamOutputOutstandingLength=_streamOutputOutstandingLength;
@property(nonatomic) long long streamOutputOffset; // @synthesize streamOutputOffset=_streamOutputOffset;
@property(nonatomic, getter=isStreamOutputDone) BOOL streamOutputDone; // @synthesize streamOutputDone=_streamOutputDone;
@property(retain, nonatomic) id <BUStreamReadChannel> streamReadChannel; // @synthesize streamReadChannel=_streamReadChannel;
@property(copy, nonatomic) CDUnknownBlockType streamReadChannelBlock; // @synthesize streamReadChannelBlock=_streamReadChannelBlock;
@property(retain, nonatomic) NSArray *blockInfos; // @synthesize blockInfos=_blockInfos;
@property(retain, nonatomic) NSError *sourceReadChannelError; // @synthesize sourceReadChannelError=_sourceReadChannelError;
@property(nonatomic) unsigned long long sourceLength; // @synthesize sourceLength=_sourceLength;
@property(nonatomic) long long sourceOffset; // @synthesize sourceOffset=_sourceOffset;
@property(nonatomic) unsigned long long sourceReadBufferSize; // @synthesize sourceReadBufferSize=_sourceReadBufferSize;
@property(retain, nonatomic) id <BUReadChannel> sourceReadChannel; // @synthesize sourceReadChannel=_sourceReadChannel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readQueue; // @synthesize readQueue=_readQueue;
@property(copy, nonatomic) CDUnknownBlockType streamReadChannelSourceHandler; // @synthesize streamReadChannelSourceHandler=_streamReadChannelSourceHandler;
@property(readonly, nonatomic) BOOL isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(char *)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2;
- (void)_closeStreamReadChannel;
- (void)_close;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(CDUnknownBlockType)arg4;
- (id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

