//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIBoxcarFilterPointFIFO, UIPointFIFO, UIQuadCurvePointFIFO;

__attribute__((visibility("hidden")))
@interface DKPointSmoothing : NSObject
{
    unsigned long long _width;
    float _spacing;
    float _unitScale;
    BOOL _emitInterpolatedPoints;
    UIPointFIFO *_strokeFIFO;
    UIBoxcarFilterPointFIFO *_boxcarFIFO;
    UIQuadCurvePointFIFO *_interpolatingFIFO;
}

+ (void)_interpolateFromPoint:(float)arg1 toPoint:(CDUnknownBlockType)arg2 withControlPoint:atUnitScale:emissionHandler: /* Error: Ran out of types for this method. */;
+ (MISSING_TYPE *)interpolateFromPoint:(float)arg1 toPoint:controlPoint:time: /* Error: Ran out of types for this method. */;
- (void).cxx_destruct;
@property(retain, nonatomic) UIQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) UIBoxcarFilterPointFIFO *boxcarFIFO; // @synthesize boxcarFIFO=_boxcarFIFO;
@property(retain, nonatomic) UIPointFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(nonatomic) BOOL emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(nonatomic) float unitScale; // @synthesize unitScale=_unitScale;
@property(nonatomic) float spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void)clear;
- (void)flush;
- (void)emitPoint: /* Error: Ran out of types for this method. */;
- (void)addPoint: /* Error: Ran out of types for this method. */;
@property(copy, nonatomic) CDUnknownBlockType emissionHandler;
- (id)init;
- (id)initWithWidth:(unsigned long long)arg1 spacing:(float)arg2;

@end

