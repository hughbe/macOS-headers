//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SAPAStyleSymbol : NSObject
{
    NSString *_name;
    unsigned long long _offsetIntoTextSegment;
    unsigned long long _length;
    NSArray *_sourceInfos;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_a16f0967 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(retain) NSArray *sourceInfos; // @synthesize sourceInfos=_sourceInfos;
@property unsigned long long length; // @synthesize length=_length;
@property unsigned long long offsetIntoTextSegment; // @synthesize offsetIntoTextSegment=_offsetIntoTextSegment;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)populateReferencesUsingBuffer:(const CDStruct_a16f0967 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;

@end

