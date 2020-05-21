//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying>
{
    NSString *_stringValue;
    unsigned long long _customType;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long customType; // @synthesize customType=_customType;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)valueType;
- (unsigned long long)attributeType;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 stringValue:(id)arg3;
- (id)initWithStringValue:(id)arg1;

@end

