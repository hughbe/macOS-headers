//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PASampling/PASerializable-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PAMountStatusTracker : NSObject <PASerializable>
{
    NSMutableDictionary *_mountStatusDict;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
- (unsigned long long)forEachUnresponsiveMountWithSanitizedPaths:(BOOL)arg1 BetweenMachStartTime:(double)arg2 andEndTime:(double)arg3 runBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)forEachMountBlockingThread:(unsigned long long)arg1 withSanitizedPaths:(BOOL)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 runBlock:(CDUnknownBlockType)arg5;
- (void)takeCurrentMountStatusForMachTime:(double)arg1;
- (id)init;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

