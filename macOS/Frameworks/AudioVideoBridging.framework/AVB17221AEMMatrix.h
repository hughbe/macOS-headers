//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMBaseControl.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class NSArray;

@interface AVB17221AEMMatrix : AVB17221AEMBaseControl <NSCopying>
{
    unsigned short width;
    unsigned short height;
    unsigned short numberOfSources;
    unsigned short baseSource;
    unsigned short internalControlValueType;
    unsigned long long controlType;
    NSArray *values;
    NSArray *sources;
}

+ (id)keyPathsForValuesAffectingUnknownValue;
+ (id)keyPathsForValuesAffectingReadOnly;
@property(copy) NSArray *sources; // @synthesize sources;
@property unsigned short internalControlValueType; // @synthesize internalControlValueType;
@property unsigned short baseSource; // @synthesize baseSource;
@property unsigned short numberOfSources; // @synthesize numberOfSources;
@property(copy) NSArray *values; // @synthesize values;
@property unsigned short height; // @synthesize height;
@property unsigned short width; // @synthesize width;
@property unsigned long long controlType; // @synthesize controlType;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(getter=isUnknownValue) BOOL unknownValue; // @dynamic unknownValue;
@property(getter=isReadOnly) BOOL readOnly; // @dynamic readOnly;
@property unsigned short controlValueType; // @dynamic controlValueType;
- (void)renumberDescriptorWithNextIndexes:(id)arg1;
- (void)updateDependentContent;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)validChildrenDescriptorTypes;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

