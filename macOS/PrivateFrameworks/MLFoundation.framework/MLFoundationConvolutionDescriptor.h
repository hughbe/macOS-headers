//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MLFoundation/NSCopying-Protocol.h>
#import <MLFoundation/NSSecureCoding-Protocol.h>

@interface MLFoundationConvolutionDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _depthWiseConvolution;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _strideInX;
    unsigned long long _strideInY;
    unsigned long long _dilationRateInX;
    unsigned long long _dilationRateInY;
    unsigned long long _paddingSize;
}

+ (BOOL)supportsSecureCoding;
+ (id)depthWiseConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 channelMultiplier:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6 dilationRateInX:(unsigned long long)arg7 dilationRateInY:(unsigned long long)arg8 paddingSize:(unsigned long long)arg9;
+ (id)depthWiseConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 channelMultiplier:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6 paddingSize:(unsigned long long)arg7;
+ (id)depthWiseConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 channelMultiplier:(unsigned long long)arg4;
+ (id)convolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6 dilationRateInX:(unsigned long long)arg7 dilationRateInY:(unsigned long long)arg8 paddingSize:(unsigned long long)arg9;
+ (id)convolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6 paddingSize:(unsigned long long)arg7;
+ (id)convolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
@property(readonly, nonatomic) BOOL depthWiseConvolution; // @synthesize depthWiseConvolution=_depthWiseConvolution;
@property(readonly, nonatomic) unsigned long long paddingSize; // @synthesize paddingSize=_paddingSize;
@property(readonly, nonatomic) unsigned long long dilationRateInY; // @synthesize dilationRateInY=_dilationRateInY;
@property(readonly, nonatomic) unsigned long long dilationRateInX; // @synthesize dilationRateInX=_dilationRateInX;
@property(readonly, nonatomic) unsigned long long strideInY; // @synthesize strideInY=_strideInY;
@property(readonly, nonatomic) unsigned long long strideInX; // @synthesize strideInX=_strideInX;
@property(readonly, nonatomic) unsigned long long outputFeatureChannels; // @synthesize outputFeatureChannels=_outputFeatureChannels;
@property(readonly, nonatomic) unsigned long long inputFeatureChannels; // @synthesize inputFeatureChannels=_inputFeatureChannels;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6 dilationRateInX:(unsigned long long)arg7 dilationRateInY:(unsigned long long)arg8 paddingSize:(unsigned long long)arg9 depthWiseConvolution:(BOOL)arg10;
- (id)init;

@end

