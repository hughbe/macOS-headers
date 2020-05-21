//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class MSOID, NSArray, NSData;

@interface MSCMSAttribute : NSObject <MSCMSAttributeCoder>
{
    MSOID *_attributeType;
    NSArray *_attributeValues;
    NSData *_attributeDERData;
    struct Attribute *_encodedAttribute;
}

+ (id)decodeAttribute:(struct Attribute *)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property struct Attribute *encodedAttribute; // @synthesize encodedAttribute=_encodedAttribute;
@property(retain) NSData *attributeDERData; // @synthesize attributeDERData=_attributeDERData;
@property(readonly, retain) NSArray *attributeValues; // @synthesize attributeValues=_attributeValues;
@property(readonly, retain) MSOID *attributeType; // @synthesize attributeType=_attributeType;
- (void)dealloc;
- (struct Attribute *)generateAttributeStruct;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithAttributeType:(id)arg1 values:(id)arg2;
- (id)initWithDER:(id)arg1;
- (id)initWithAttributeStruct:(struct Attribute *)arg1 error:(id *)arg2;

@end

