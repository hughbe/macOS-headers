//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SASerializable-Protocol.h>

@class NSArray, NSMutableArray, NSString, SATimestamp;

@interface SAThread : NSObject <SASerializable>
{
    NSMutableArray *_threadStates;
    BOOL _isGlobalForcedIdle;
    BOOL _isMainThread;
    unsigned long long _threadId;
    SATimestamp *_creationTimestamp;
    SATimestamp *_exitTimestamp;
}

+ (id)threadWithId:(unsigned long long)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_bc1efd6c *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property BOOL isMainThread; // @synthesize isMainThread=_isMainThread;
@property BOOL isGlobalForcedIdle; // @synthesize isGlobalForcedIdle=_isGlobalForcedIdle;
@property(retain) SATimestamp *exitTimestamp; // @synthesize exitTimestamp=_exitTimestamp;
@property(retain) SATimestamp *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly) unsigned long long threadId; // @synthesize threadId=_threadId;
@property(readonly) NSArray *threadStates; // @synthesize threadStates=_threadStates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) BOOL isProcessorIdleThread;
- (void)insertState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)forwardFillMonotonicallyIncreasingData;
- (unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2;
- (void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(CDUnknownBlockType)arg5;
- (id)lastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (id)firstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (unsigned long long)addState:(id)arg1;
- (id)initWithId:(unsigned long long)arg1;
- (void)populateReferencesUsingBuffer:(const CDStruct_bc1efd6c *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_bc1efd6c *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

