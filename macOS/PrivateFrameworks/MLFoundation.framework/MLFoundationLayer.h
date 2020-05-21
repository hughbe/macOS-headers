//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLFoundationDevice, MLFoundationTensor, NSArray, NSMutableArray, NSString;

@interface MLFoundationLayer : NSObject
{
    BOOL _isPreprocessingLayer;
    BOOL _skipLayer;
    BOOL _enableDebugging;
    int _paddingPolicy;
    unsigned long long _layerID;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _dilationRateInX;
    unsigned long long _dilationRateInY;
    unsigned long long _strideInX;
    unsigned long long _strideInY;
    MLFoundationDevice *_device;
    NSArray *_deviceOps;
    NSString *_label;
    NSMutableArray *_sourceTensors;
    NSMutableArray *_resultTensor;
    MLFoundationTensor *_sourceGradientTensor;
    MLFoundationTensor *_lossInitialGradientTensor;
    NSMutableArray *_fusedLayers;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableArray *fusedLayers; // @synthesize fusedLayers=_fusedLayers;
@property(copy, nonatomic) MLFoundationTensor *lossInitialGradientTensor; // @synthesize lossInitialGradientTensor=_lossInitialGradientTensor;
@property(copy, nonatomic) MLFoundationTensor *sourceGradientTensor; // @synthesize sourceGradientTensor=_sourceGradientTensor;
@property(readonly, copy, nonatomic) NSMutableArray *resultTensor; // @synthesize resultTensor=_resultTensor;
@property(readonly, copy, nonatomic) NSMutableArray *sourceTensors; // @synthesize sourceTensors=_sourceTensors;
@property(nonatomic) BOOL enableDebugging; // @synthesize enableDebugging=_enableDebugging;
@property(nonatomic) BOOL skipLayer; // @synthesize skipLayer=_skipLayer;
@property(readonly, nonatomic) BOOL isPreprocessingLayer; // @synthesize isPreprocessingLayer=_isPreprocessingLayer;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSArray *deviceOps; // @synthesize deviceOps=_deviceOps;
@property(retain, nonatomic) MLFoundationDevice *device; // @synthesize device=_device;
@property(nonatomic) int paddingPolicy; // @synthesize paddingPolicy=_paddingPolicy;
@property(nonatomic) unsigned long long strideInY; // @synthesize strideInY=_strideInY;
@property(nonatomic) unsigned long long strideInX; // @synthesize strideInX=_strideInX;
@property(nonatomic) unsigned long long dilationRateInY; // @synthesize dilationRateInY=_dilationRateInY;
@property(nonatomic) unsigned long long dilationRateInX; // @synthesize dilationRateInX=_dilationRateInX;
@property(nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property(nonatomic) unsigned long long layerID; // @synthesize layerID=_layerID;
- (id)description;
- (unsigned long long)computeResultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (void)assignLayerID:(unsigned long long)arg1;
- (void)bindDevice:(id)arg1 deviceOps:(id)arg2;
- (id)initWithLabel:(id)arg1 isPreprocessingLayer:(BOOL)arg2;
- (id)initWithLabel:(id)arg1;
- (id)init;

@end

