//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLCppContainer.h>

@class NSData;

@interface CLCppEncodableDataContainer : CLCppContainer
{
    NSData *_serialized;
    id _compatibilityInfo;
    CDUnknownBlockType _encoder;
}

+ (BOOL)supportsSecureCoding;
+ (id)containerWithObject:(void *)arg1 cppDataEncoder:(CDUnknownBlockType)arg2 destructor:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType encoder; // @synthesize encoder=_encoder;
@property(copy, nonatomic) id compatibilityInfo; // @synthesize compatibilityInfo=_compatibilityInfo;
@property(copy, nonatomic) NSData *serialized; // @synthesize serialized=_serialized;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(void *)arg1 cppDataEncoder:(CDUnknownBlockType)arg2 destructor:(CDUnknownBlockType)arg3;

@end

