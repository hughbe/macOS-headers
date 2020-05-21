//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSSecureCoding-Protocol.h>

@class NSArray, NSColorSpace;

@interface NSGradient : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_colorArray;
    NSColorSpace *_colorSpace;
    void *_functionRef;
    void *_componentArray;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)_windowBorderGradientFromGrayValue:(int)arg1 toGrayValue:(int)arg2 colorSpace:(id)arg3;
- (BOOL)_isValidDecodedColorArray:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)interpolatedColorAtLocation:(double)arg1;
- (void)getColor:(id *)arg1 location:(double *)arg2 atIndex:(long long)arg3;
@property(readonly) long long numberOfColorStops;
@property(readonly) NSColorSpace *colorSpace;
- (void)drawInBezierPath:(id)arg1 relativeCenterPosition:(struct CGPoint)arg2;
- (void)drawInRect:(struct CGRect)arg1 relativeCenterPosition:(struct CGPoint)arg2;
- (void)drawFromCenter:(struct CGPoint)arg1 radius:(double)arg2 toCenter:(struct CGPoint)arg3 radius:(double)arg4 options:(unsigned long long)arg5;
- (void)drawInBezierPath:(id)arg1 angle:(double)arg2;
- (void)drawInRect:(struct CGRect)arg1 angle:(double)arg2;
- (void)drawFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithColors:(id)arg1 atLocations:(const double *)arg2 colorSpace:(id)arg3;
- (id)initWithColorsAndLocations:(id)arg1;
- (id)initWithColors:(id)arg1;
- (id)initWithStartingColor:(id)arg1 endingColor:(id)arg2;
- (id)init;
- (id)_initWithColorSpace:(id)arg1 callbacks:(struct CGFunctionCallbacks)arg2 data:(void *)arg3;
- (void)_commonInitWithColorArray:(id)arg1 colorSpace:(id)arg2 padStart:(BOOL)arg3 padEnd:(BOOL)arg4;
- (struct CGFunction *)_interpolationFunctionRefWithCallbacks:(struct CGFunctionCallbacks *)arg1;
- (id)_colorSpaceForColorArray:(id)arg1;

@end

