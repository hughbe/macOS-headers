//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@class NSString;

@interface AVB17221AEMControlDescriptorUTF8Value : AVB17221AEMControlDescriptorValue
{
    NSString *value;
}

@property(copy) NSString *value; // @synthesize value;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)validControlValueType:(unsigned short)arg1;
- (id)objectsForSetCommandValuesData:(id)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)updateWithValueXMLElement:(id)arg1;
- (id)valueXMLElement;
- (id)valueDictionary;
- (BOOL)updateWithValueDictionary:(id)arg1;
- (id)currentValueData;
- (void)setCurrentValueData:(id)arg1;
- (unsigned long long)currentValueSize;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initWithValuePointer:(char **)arg1 utf8Length:(unsigned short)arg2;

@end

