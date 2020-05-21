//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RBDisplayList : NSObject
{
    struct DisplayList _list;
    struct cf_ptr<CGContext *> _context;
    struct ContextDelegate *_delegate;
    BOOL _linearColors;
    struct CGRect _contentRect;
}

+ (id)displayListForCGContext:(struct CGContext *)arg1 alpha:(float *)arg2 blendMode:(int *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(nonatomic) BOOL linearColors; // @synthesize linearColors=_linearColors;
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(CDStruct_0b1c536a)arg2 bias:(float)arg3;
- (void)addGrayscaleFilterWithAmount:(float)arg1;
- (void)addColorMatrixFilterWithArray:(float [20])arg1;
- (void)addColorInvertFilter;
- (void)addLuminanceToAlphaFilter;
- (void)addContrastFilterWithAmount:(float)arg1;
- (void)addBrightnessFilterWithAmount:(float)arg1;
- (void)addSaturationFilterWithAmount:(float)arg1;
- (void)addHueRotationFilterWithAngle:(double)arg1;
- (void)addColorMultiplyFilterWithColor:(CDStruct_0b1c536a)arg1;
- (void)addBlurFilterWithRadius:(double)arg1;
- (void)addBlurFilterWithRadius:(double)arg1 opaque:(BOOL)arg2;
- (void)addProjectionStyleWithArray:(float [9])arg1;
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize)arg2 color:(CDStruct_0b1c536a)arg3 mode:(int)arg4;
- (void)drawDisplayList:(id)arg1;
- (void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4;
- (void)clipShape:(id)arg1 mode:(int)arg2;
- (void)concat:(struct CGAffineTransform)arg1;
- (void)rotateBy:(double)arg1;
- (void)translateByX:(double)arg1 Y:(double)arg2;
- (void)scaleByX:(double)arg1 Y:(double)arg2;
@property(readonly, nonatomic) struct CGRect clipBoundingBox;
@property(nonatomic) struct CGAffineTransform CTM;
- (void)endCGContext;
- (struct CGContext *)beginCGContextWithAlpha:(float)arg1;
- (void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2;
- (void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2;
- (void)beginLayerWithFlags:(unsigned int)arg1;
- (void)beginLayer;
- (void)restore;
- (void)save;
@property(readonly, nonatomic) const struct DisplayList *rb_displayList;
- (void)clear;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) struct CGRect boundingRect;
- (id)init;

@end

