//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoKit/NURenderView.h>

@interface NUDebugRenderView : NURenderView
{
    BOOL draggedDuringThisClick;
    struct CGPoint dragStart;
    double angleX;
    double angleY;
    double deltaX;
    double deltaY;
    BOOL _debugMode;
}

- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_prepareForDrag;
- (void)_resetOrientation:(id)arg1;
- (void)_orientWithX:(double)arg1 andY:(double)arg2;
- (BOOL)debugMode;
- (void)setDebugMode:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

