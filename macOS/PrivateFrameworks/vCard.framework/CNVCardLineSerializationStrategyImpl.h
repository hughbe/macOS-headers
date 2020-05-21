//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardLineSerialization-Protocol.h>

@class NSString;
@protocol CNVCardSerializationStorage;

@interface CNVCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization>
{
    id <CNVCardSerializationStorage> _storage;
}

+ (id)serializerWithStorage:(id)arg1;
- (void).cxx_destruct;
- (void)insertLine:(id)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (void)serializeVersionPlaceholder;
- (void)serializeOpaqueValue:(id)arg1;
- (void)serializeData:(id)arg1;
- (void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
- (void)serializeString:(id)arg1;
- (BOOL)canSerializeData:(id)arg1;
- (BOOL)canSerializeArray:(id)arg1;
- (BOOL)canSerializeString:(id)arg1;
- (void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2;
- (void)serializeParameters:(id)arg1;
- (void)serializeName:(id)arg1;
- (void)serializeGroupingName:(id)arg1;
- (void)willSerializeValue;
- (void)serializeLine:(id)arg1;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

