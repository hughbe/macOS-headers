//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@interface MDLNoiseTexture : MDLTexture
{
    _Bool _vectorNoise;
    float _smoothness;
    _Bool _grayScale;
    float _frequency;
    int _noiseMode;
}

- (id)initCellularNoiseWithFrequency:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;
- (id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(BOOL)arg5 grayscale: /* Error: Ran out of types for this method. */;
- (id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;
- (id)generateDataAtLevel:(long long)arg1;
- (id)_generateCellularNoiseAtLevel:(long long)arg1;

@end

