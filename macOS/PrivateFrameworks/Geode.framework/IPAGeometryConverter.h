//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Geode/IPAGeometryConverter-Protocol.h>

@class NSString, PARenderPipelineGeometry;

@interface IPAGeometryConverter : NSObject <IPAGeometryConverter>
{
    PARenderPipelineGeometry *_geometry;
    struct PFIntSize_st _inputSize;
    long long _orientation;
    BOOL _computedInputToOutputTransform;
    struct CGAffineTransform _inputToOutputTransform;
    BOOL _computedOutputToInputTransform;
    struct CGAffineTransform _outputToInputTransform;
}

+ (id)identityConvertorForSize:(struct PFIntSize_st)arg1;
- (void).cxx_destruct;
- (unsigned long long)computeRectPosition:(struct CGRect)arg1 onImageRect:(struct CGRect)arg2 intersectionSizeInPercent:(double *)arg3;
- (double)distanceBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (void)translateOutputPoint:(struct CGPoint)arg1 andOutputRadius:(double)arg2 toInputPoint:(struct CGPoint *)arg3 andInputRadius:(double *)arg4;
- (void)translateInputPoint:(struct CGPoint)arg1 andInputRadius:(double)arg2 toOutputPoint:(struct CGPoint *)arg3 andOutputRadius:(double *)arg4;
- (struct CGPoint)unitInputPointFromUnitOutputPoint:(struct CGPoint)arg1;
- (struct CGPoint)unitOutputPointFromUnitInputPoint:(struct CGPoint)arg1;
- (struct CGPoint)inputPointFromOutputPoint:(struct CGPoint)arg1;
- (struct CGPoint)outputPointFromInputPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)inputToDisplayTransform;
- (struct CGAffineTransform)inputToOutputTransform;
- (struct CGAffineTransform)outputToInputTransform;
- (struct ipa_pointConversionResult)convertFromOutputPoint:(struct CGPoint)arg1;
- (unsigned long long)intersectionTypeForRect:(struct CGRect)arg1 point:(struct CGPoint)arg2;
- (void)computeIntersectionTypeForCropRect:(struct CGRect)arg1 transformedRect:(struct CGRect)arg2 intersectionType:(unsigned long long *)arg3 clippedRect:(struct CGRect *)arg4;
- (struct ipa_rectConversionResult)convertFromOutputRect:(struct CGRect)arg1;
- (struct ipa_rectConversionResult)convertFromInputRect:(struct CGRect)arg1;
- (BOOL)isValidOutputRect:(struct CGRect)arg1;
- (BOOL)isValidOutputPoint:(struct CGPoint)arg1;
- (struct CGRect)_outputSpace;
- (BOOL)isValidInputRect:(struct CGRect)arg1;
- (BOOL)isValidInputPoint:(struct CGPoint)arg1;
- (struct CGRect)_inputSpace;
- (struct PFIntSize_st)outputSize;
- (struct PFIntSize_st)inputSize;
- (id)_initWithGeometry:(id)arg1 inputSize:(struct PFIntSize_st)arg2 orientation:(long long)arg3;
- (id)initWithGeometry:(id)arg1 inputSize:(struct PFIntSize_st)arg2 orientation:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

