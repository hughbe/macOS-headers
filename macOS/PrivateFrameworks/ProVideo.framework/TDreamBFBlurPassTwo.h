//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamBFBlurPassTwo : TDreamProgramWrapperTwoInput
{
    int sigmaColorUniform;
    int sigmaUniform;
    double _sigma;
    double _sigmaColor;
}

@property(nonatomic) double sigmaColor; // @synthesize sigmaColor=_sigmaColor;
@property(nonatomic) double sigma; // @synthesize sigma=_sigma;
- (void)setUniforms;
- (id)init;

@end

