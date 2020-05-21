//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;
@protocol MTLDevice;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allowBackgroundGPUComputeSetting;
    BOOL _useWatchSPIForScribble;
    BOOL _allowLowPrecisionAccumulationOnGPU;
    BOOL _enableTestVectorMode;
    long long _computeUnits;
    id <MTLDevice> _preferredMetalDevice;
    NSDictionary *_parameters;
    NSURL *_rootModelURL;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain) NSURL *rootModelURL; // @synthesize rootModelURL=_rootModelURL;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) BOOL enableTestVectorMode; // @synthesize enableTestVectorMode=_enableTestVectorMode;
@property(retain, nonatomic) id <MTLDevice> preferredMetalDevice; // @synthesize preferredMetalDevice=_preferredMetalDevice;
@property BOOL allowLowPrecisionAccumulationOnGPU; // @synthesize allowLowPrecisionAccumulationOnGPU=_allowLowPrecisionAccumulationOnGPU;
@property(nonatomic) BOOL useWatchSPIForScribble; // @synthesize useWatchSPIForScribble=_useWatchSPIForScribble;
@property BOOL allowBackgroundGPUComputeSetting; // @synthesize allowBackgroundGPUComputeSetting=_allowBackgroundGPUComputeSetting;
@property long long computeUnits; // @synthesize computeUnits=_computeUnits;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToModelConfiguration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL allowBackgroundGPUCompute;
@property(retain, nonatomic) id <MTLDevice> preferredMTLDevice;
@property(nonatomic) BOOL allowFloat16AccumulationOnGPU;
- (id)init;
- (id)initWithComputeUnits:(long long)arg1;
- (id)computeUnitsToString:(long long)arg1;

@end

