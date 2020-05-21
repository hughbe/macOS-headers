//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SASerializable-Protocol.h>

@class NSString, SAThread, SAThreadState;

@interface SADispatchQueueState : NSObject <SASerializable>
{
    SAThread *_thread;
    unsigned long long _threadStateIndex;
}

+ (id)stateWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_b1ad6422 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property unsigned long long threadStateIndex; // @synthesize threadStateIndex=_threadStateIndex;
@property(readonly) SAThread *thread; // @synthesize thread=_thread;
- (id)debugDescriptionWithDispatchQueue:(id)arg1;
@property(readonly) SAThreadState *threadState;
- (id)initWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2;
- (void)populateReferencesUsingBuffer:(const CDStruct_b1ad6422 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_b1ad6422 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

