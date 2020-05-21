//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLMaterialPropertyNode, MDLTextureSampler, MISSING_TYPE, NSString, NSURL;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying>
{
    NSString *_string;
    NSString *_name;
    NSURL *_url;
    MDLTextureSampler *_textureSampler;
    MISSING_TYPE *_float;
    CDStruct_14d5dc5e _matrix;
    struct CGColor *_color;
    unsigned long long _semantic;
    MDLMaterialPropertyNode *_node;
    MDLMaterialProperty *_overrider;
    MDLMaterialProperty *_overridee;
    BOOL _isDefaultValue;
    unsigned long long _type;
    CDStruct_14d5dc5e _matrix4x4;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isDefaultValue; // @synthesize isDefaultValue=_isDefaultValue;
@property(nonatomic) CDStruct_14d5dc5e matrix4x4; // @synthesize matrix4x4=_matrix4x4;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setMatrix4x4Value:(CDStruct_14d5dc5e)arg1;
@property(nonatomic) MISSING_TYPE *float4Value;
@property(nonatomic) MISSING_TYPE *float3Value;
@property(nonatomic) MISSING_TYPE *float2Value;
@property(nonatomic) float luminance;
@property(nonatomic) float floatValue;
@property(retain, nonatomic) MDLTextureSampler *textureSamplerValue;
@property(copy, nonatomic) NSURL *URLValue;
@property(copy, nonatomic) NSString *stringValue;
@property(nonatomic) struct CGColor *color;
- (void)setProperties:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(struct CGColor *)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4WithSRGBA: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(CDStruct_14d5dc5e)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float3: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float2: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2;
@property(nonatomic) unsigned long long semantic;
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;

@end

