//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFHUDLayerControllerPrivate;

@interface PDFHUDLayerController : NSObject
{
    PDFHUDLayerControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_setLayerColor:(double)arg1;
- (id)_getImageForControlName:(id)arg1 active:(_Bool)arg2;
- (void)_setupLayer:(id)arg1;
- (void)_performActionForControl:(id)arg1;
- (id)_layerForEvent:(id)arg1;
- (id)_controlForEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (_Bool)mouseIsInController:(id)arg1;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isVisible;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initInLayer:(id)arg1 withControlArray:(id)arg2;

@end

