//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SATask;

__attribute__((visibility("hidden")))
@interface SAPAStyleTimeInsensitiveTaskData : NSObject
{
    SATask *_task;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_d00202c1 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(retain) SATask *task; // @synthesize task=_task;
- (void)populateReferencesUsingBuffer:(const CDStruct_d00202c1 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;

@end

