//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelExponential : AXMDataRegressionModel
{
}

- (BOOL)dataSatisfiesInitialConditions;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
- (id)partialDerivatives;
- (void)getInitialParams:(double *)arg1;
- (int)modelParameterCount;
- (CDUnknownBlockType)modelFunction;
- (id)modelDescription;

@end

