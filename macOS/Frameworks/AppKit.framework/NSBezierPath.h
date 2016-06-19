//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface NSBezierPath : NSObject <NSCopying, NSCoding>
{
    long long _elementCount;
    long long _elementMax;
    struct PATHSEGMENT *_head;
    long long _lastSubpathIndex;
    void *_extraSegments;
    double _lineWidth;
    struct CGRect _controlPointBounds;
    double _miterLimit;
    double _flatness;
    double *_dashedLinePattern;
    unsigned long long _dashedLineCount;
    double _dashedLinePhase;
    void *_path;
    long long _extraSegmentCount;
    long long _extraSegmentMax;
    struct {
        unsigned int _flags:8;
        unsigned int _pathState:2;
        unsigned int _unused:22;
    } _bpFlags;
}

+ (double)defaultLineWidth;
+ (void)setDefaultLineWidth:(double)arg1;
+ (unsigned long long)defaultLineJoinStyle;
+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;
+ (unsigned long long)defaultLineCapStyle;
+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;
+ (unsigned long long)defaultWindingRule;
+ (void)setDefaultWindingRule:(unsigned long long)arg1;
+ (double)defaultFlatness;
+ (void)setDefaultFlatness:(double)arg1;
+ (double)defaultMiterLimit;
+ (void)setDefaultMiterLimit:(double)arg1;
+ (void)drawPackedGlyphs:(const char *)arg1 atPoint:(struct CGPoint)arg2;
+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (void)clipRect:(struct CGRect)arg1;
+ (void)strokeRect:(struct CGRect)arg1;
+ (void)fillRect:(struct CGRect)arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3;
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)bezierPath;
+ (void)initialize;
+ (double)lineWidth;
+ (void)setLineWidth:(double)arg1;
+ (unsigned long long)lineJoinStyle;
+ (void)setLineJoinStyle:(unsigned long long)arg1;
+ (unsigned long long)lineCapStyle;
+ (void)setLineCapStyle:(unsigned long long)arg1;
+ (unsigned long long)windingRule;
+ (void)setWindingRule:(unsigned long long)arg1;
+ (double)flatness;
+ (void)setFlatness:(double)arg1;
+ (double)miterLimit;
+ (void)setMiterLimit:(double)arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3 roundedTopLeftCorner:(BOOL)arg4 roundedTopRightCorner:(BOOL)arg5 roundedBottomLeftCorner:(BOOL)arg6 roundedBottomRightCorner:(BOOL)arg7;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)appendBezierPathWithRoundedRect:(struct CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3;
- (void)appendBezierPathWithPackedGlyphs:(const char *)arg1;
- (void)appendBezierPathWithGlyphs:(unsigned int *)arg1 count:(long long)arg2 inFont:(id)arg3;
- (void)appendBezierPathWithGlyph:(unsigned int)arg1 inFont:(id)arg2;
- (void)appendBezierPathWithNativeGlyphs:(const unsigned short *)arg1 advances:(struct CGSize *)arg2 count:(unsigned long long)arg3 inFont:(id)arg4;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;
- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;
- (void)appendBezierPathWithRect:(struct CGRect)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)_appendToPath:(id)arg1;
- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;
- (unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;
- (unsigned long long)elementAtIndex:(long long)arg1;
@property(readonly) long long elementCount;
@property(readonly) struct CGRect bounds;
@property(readonly) struct CGRect controlPointBounds;
@property(readonly) struct CGPoint currentPoint;
@property(readonly, getter=isEmpty) BOOL empty;
- (void)transformUsingAffineTransform:(id)arg1;
@property(readonly, copy) NSBezierPath *bezierPathByReversingPath;
- (id)_copyFlattenedPath;
@property(readonly, copy) NSBezierPath *bezierPathByFlatteningPath;
- (void)flattenIntoPath:(id)arg1;
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;
- (void)setClip;
- (void)addClip;
- (void)fill;
- (void)stroke;
- (struct CGPath *)CGPath;
- (void)_doPath;
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
@property double flatness;
@property double miterLimit;
@property unsigned long long windingRule;
@property unsigned long long lineJoinStyle;
@property unsigned long long lineCapStyle;
@property double lineWidth;
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)relativeLineToPoint:(struct CGPoint)arg1;
- (void)relativeMoveToPoint:(struct CGPoint)arg1;
- (void)removeAllPoints;
- (void)closePath;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)_deviceLineToPoint:(struct CGPoint)arg1;
- (void)_deviceMoveToPoint:(struct CGPoint)arg1;
- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;
- (id)description;
- (void)setCachesBezierPath:(BOOL)arg1;
- (BOOL)cachesBezierPath;
- (void)appendBezierPathWithRoundedRect:(struct CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3 roundedTopLeftCorner:(BOOL)arg4 roundedTopRightCorner:(BOOL)arg5 roundedBottomLeftCorner:(BOOL)arg6 roundedBottomRightCorner:(BOOL)arg7;
- (void)_appendBezierPathWithRoundRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void)_appendBezierPathWithBottomRoundRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void)_appendBezierPathWithTopRoundRect:(struct CGRect)arg1 cornerRadius:(double)arg2;

@end

