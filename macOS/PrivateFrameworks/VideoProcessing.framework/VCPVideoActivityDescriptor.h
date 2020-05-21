//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPVideoActivityDescriptor : NSObject
{
    float descriptors[10];
    int _widthInMb;
    int _heightInMb;
    long long *_motionMagnitudeHistogram;
    float *_motionMagnitude;
}

@property(readonly) float *descriptors;
- (void)spatialDescriptorWithMvMagnitudeMean:(float)arg1;
- (void)ExtractActivityDescriptorFromStats:(struct EncodeStats *)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2;

@end

