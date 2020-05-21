//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAECheckerboard : PAEGeneratorDefaultBase
{
}

- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(char *)arg2 software:(char *)arg3;
- (BOOL)canThrowRenderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (void)getTransformMatrix:(double (**)[4][4])arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5;
- (id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2;
- (id)properties;
- (BOOL)parameterChanged:(unsigned int)arg1;
- (void)updateShapeParameter:(unsigned int)arg1 atTime:(CDUnion_baaf6063)arg2;
- (BOOL)addParameters;
- (void)filteredEdges:(char *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (BOOL)variesOverTime;
- (id)initWithAPIManager:(id)arg1;

@end

