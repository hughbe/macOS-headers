//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TuriCore/JSExport-Protocol.h>

@class JSValue, NSArray, NSString;

@protocol TCVegaCGContextInterface <JSExport>
@property double lineDashOffset;
@property(retain) NSString *font;
@property(retain) NSString *textAlign;
@property(retain) NSString *strokeStyle;
@property(nonatomic) double pixelRatio;
@property double miterLimit;
@property double lineWidth;
@property(retain) NSString *lineJoin;
@property(retain) NSString *lineCap;
@property double globalAlpha;
@property(retain) JSValue *fillStyle;
- (BOOL)isPointInPathWithX:(double)arg1 y:(double)arg2;
- (void)translateWithX:(double)arg1 y:(double)arg2;
- (void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
- (void)rotateWithAngle:(double)arg1;
- (void)setLineDashWithSegments:(NSArray *)arg1;
- (void)strokeTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3;
- (void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)stroke;
- (void)moveToX:(double)arg1 y:(double)arg2;
- (void)lineToX:(double)arg1 y:(double)arg2;
- (void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)fillTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3;
- (void)fill;
- (JSValue *)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (void)closePath;
- (void)clip;
- (void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4;
- (void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
- (void)beginPath;
- (void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(BOOL)arg6;
- (void)restore;
- (void)save;
- (JSValue *)measureText:(NSString *)arg1;

@optional
- (BOOL)isPointInPathWithX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__isPointInPath:(id)arg3;
- (void)translateWithX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__translate:(id)arg3;
- (void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6 __JS_EXPORT_AS__setTransform:(id)arg7;
- (void)rotateWithAngle:(double)arg1 __JS_EXPORT_AS__rotate:(id)arg2;
- (void)setLineDashWithSegments:(NSArray *)arg1 __JS_EXPORT_AS__setLineDash:(id)arg2;
- (void)strokeTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3 __JS_EXPORT_AS__strokeText:(id)arg4;
- (void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 __JS_EXPORT_AS__rect:(id)arg5;
- (void)moveToX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__moveTo:(id)arg3;
- (void)lineToX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__lineTo:(id)arg3;
- (void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 __JS_EXPORT_AS__fillRect:(id)arg5;
- (void)fillTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3 __JS_EXPORT_AS__fillText:(id)arg4;
- (JSValue *)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 __JS_EXPORT_AS__createLinearGradient:(id)arg5;
- (void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4 __JS_EXPORT_AS__clearRect:(id)arg5;
- (void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6 __JS_EXPORT_AS__bezierCurveTo:(id)arg7;
- (void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(BOOL)arg6 __JS_EXPORT_AS__arc:(id)arg7;
@end

