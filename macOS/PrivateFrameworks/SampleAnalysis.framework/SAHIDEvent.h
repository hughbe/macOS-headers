//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SASerializable-Protocol.h>

@class NSArray, NSMutableArray, NSString, SATimestamp;

@interface SAHIDEvent : NSObject <SASerializable>
{
    NSMutableArray *_steps;
    unsigned int _hidEventType;
    SATimestamp *_hidEventTimestamp;
}

+ (void)parseKTrace:(struct ktrace_session *)arg1 findingHIDEvents:(CDUnknownBlockType)arg2;
+ (id)hidEventWithHIDEventType:(unsigned int)arg1 atTimestamp:(id)arg2;
+ (id)hidEventWithoutReferencesFromPAStyleSerializedHIDEvent:(const CDStruct_55f67497 *)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_ff5f2e9b *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(readonly) unsigned int hidEventType; // @synthesize hidEventType=_hidEventType;
@property(readonly) SATimestamp *hidEventTimestamp; // @synthesize hidEventTimestamp=_hidEventTimestamp;
@property(readonly) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, copy) NSString *debugDescription;
- (void)addKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;
- (id)initWithHIDEventType:(unsigned int)arg1 atTimestamp:(id)arg2;
- (void)populateReferencesUsingBuffer:(const CDStruct_ff5f2e9b *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_ff5f2e9b *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

