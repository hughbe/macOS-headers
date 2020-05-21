//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCMPSConvolutionDescriptor : NSObject
{
    BOOL _updateWeights;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _strideWidth;
    unsigned long long _strideHeight;
    unsigned long long _paddingWidth;
    unsigned long long _paddingHeight;
    NSString *_label;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL updateWeights; // @synthesize updateWeights=_updateWeights;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long paddingHeight; // @synthesize paddingHeight=_paddingHeight;
@property(nonatomic) unsigned long long paddingWidth; // @synthesize paddingWidth=_paddingWidth;
@property(nonatomic) unsigned long long strideHeight; // @synthesize strideHeight=_strideHeight;
@property(nonatomic) unsigned long long strideWidth; // @synthesize strideWidth=_strideWidth;
@property(nonatomic) unsigned long long outputFeatureChannels; // @synthesize outputFeatureChannels=_outputFeatureChannels;
@property(nonatomic) unsigned long long inputFeatureChannels; // @synthesize inputFeatureChannels=_inputFeatureChannels;
@property(nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
- (id)init;

@end

