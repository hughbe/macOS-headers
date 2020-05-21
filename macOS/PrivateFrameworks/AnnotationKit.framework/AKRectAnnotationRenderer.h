//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKRectAnnotationRenderer : AKAnnotationRenderer
{
}

+ (struct CGPath *)_newPathForAnnotation:(id)arg1 axisAlignedForStroke:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToContext:(struct CGContext *)arg4;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;

@end

