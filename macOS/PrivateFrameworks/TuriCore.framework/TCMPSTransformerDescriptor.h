//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TCMPSConvolutionDescriptor, TCMPSDecodingDescriptor, TCMPSEncodingDescriptor, TCMPSInstanceNormalizationDescriptor, TCMPSResidualDescriptor;

__attribute__((visibility("hidden")))
@interface TCMPSTransformerDescriptor : NSObject
{
    TCMPSEncodingDescriptor *_encode1;
    TCMPSEncodingDescriptor *_encode2;
    TCMPSEncodingDescriptor *_encode3;
    TCMPSResidualDescriptor *_residual1;
    TCMPSResidualDescriptor *_residual2;
    TCMPSResidualDescriptor *_residual3;
    TCMPSResidualDescriptor *_residual4;
    TCMPSResidualDescriptor *_residual5;
    TCMPSDecodingDescriptor *_decode1;
    TCMPSDecodingDescriptor *_decode2;
    TCMPSConvolutionDescriptor *_conv;
    TCMPSInstanceNormalizationDescriptor *_inst;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst; // @synthesize inst=_inst;
@property(retain, nonatomic) TCMPSConvolutionDescriptor *conv; // @synthesize conv=_conv;
@property(retain, nonatomic) TCMPSDecodingDescriptor *decode2; // @synthesize decode2=_decode2;
@property(retain, nonatomic) TCMPSDecodingDescriptor *decode1; // @synthesize decode1=_decode1;
@property(retain, nonatomic) TCMPSResidualDescriptor *residual5; // @synthesize residual5=_residual5;
@property(retain, nonatomic) TCMPSResidualDescriptor *residual4; // @synthesize residual4=_residual4;
@property(retain, nonatomic) TCMPSResidualDescriptor *residual3; // @synthesize residual3=_residual3;
@property(retain, nonatomic) TCMPSResidualDescriptor *residual2; // @synthesize residual2=_residual2;
@property(retain, nonatomic) TCMPSResidualDescriptor *residual1; // @synthesize residual1=_residual1;
@property(retain, nonatomic) TCMPSEncodingDescriptor *encode3; // @synthesize encode3=_encode3;
@property(retain, nonatomic) TCMPSEncodingDescriptor *encode2; // @synthesize encode2=_encode2;
@property(retain, nonatomic) TCMPSEncodingDescriptor *encode1; // @synthesize encode1=_encode1;
- (id)init;

@end

