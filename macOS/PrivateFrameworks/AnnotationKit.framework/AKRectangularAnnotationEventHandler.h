//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler
{
    struct CGPoint _lastMungedPositionInModel;
}

@property struct CGPoint lastMungedPositionInModel; // @synthesize lastMungedPositionInModel=_lastMungedPositionInModel;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint)arg1;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (struct CGRect)_rectForModifiedRotatedRect:(struct CGRect)arg1 withOriginal:(struct CGRect)arg2 andRotation:(double)arg3;
- (void)setupDraggingConstraints;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;

@end

