//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKThoughtBubblePointOfInterestHelper.h>

@interface AKSpeechBubblePointOfInterestHelper : AKThoughtBubblePointOfInterestHelper
{
}

+ (struct CGPoint)_endPointOfBoundingLineSegmentFromPointyPointThroughtPoint:(struct CGPoint)arg1 forAnnotation:(id)arg2;
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (double)maxOutset;
+ (double)minOutset;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;

@end

