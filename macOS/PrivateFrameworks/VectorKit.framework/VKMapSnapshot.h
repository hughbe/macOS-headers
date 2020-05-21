//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

@class VKCamera;

@interface VKMapSnapshot : NSObject <NSSecureCoding>
{
    struct CGImage *_image;
    unsigned long long _width;
    unsigned long long _height;
    double _scale;
    VKCamera *_camera;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
- (id)imageDataInFormat:(unsigned long long)arg1;
- (CDStruct_c3b9c2ee)coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)imageSurface;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImage:(struct CGImage *)arg1 scale:(double)arg2 camera:(id)arg3;

@end

