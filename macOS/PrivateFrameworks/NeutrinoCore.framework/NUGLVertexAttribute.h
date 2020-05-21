//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NUGLVertexAttribute : NSObject
{
    BOOL _normalized;
    unsigned int _type;
    int _size;
    NSString *_name;
}

+ (id)vec4Attribute:(id)arg1;
+ (id)vec2Attribute:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL normalized; // @synthesize normalized=_normalized;
@property(readonly) int size; // @synthesize size=_size;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (long long)_typeSize;
@property(readonly) long long sizeInBytes;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3 normalized:(BOOL)arg4;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3;
- (id)init;

@end

