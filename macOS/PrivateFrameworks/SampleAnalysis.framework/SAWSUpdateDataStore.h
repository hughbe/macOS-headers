//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SASerializable-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SAWSUpdateDataStore : NSObject <SASerializable>
{
    NSMutableArray *_wsUpdateArray;
    CDUnknownBlockType _wsUpdateCallbackBlock;
    NSObject<OS_dispatch_queue> *_wsUpdateCallbackQueue;
}

+ (void)_printFrameReportExplanationToStream:(id)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 startDisplayIndex:(unsigned long long)arg3 sampleDataStore:(id)arg4 toStream:(id)arg5;
- (id)init;
- (id)_getWSUpdateArraySnapshot;
- (void)stopGatheringWSUpdateInformation;
- (void)startingGatheringWSUpdateInformation;
- (void)populateReferencesUsingBuffer:(const void *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

