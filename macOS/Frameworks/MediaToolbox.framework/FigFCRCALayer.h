//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@interface FigFCRCALayer : FigBaseCALayer
{
    struct OpaqueFigCaptionRendererCALayerInternal *layerInternal;
}

- (void)layoutSublayers;
- (void)compose;
- (void)setCallbacks:(id)arg1 userEvent:(CDUnknownFunctionPointerType)arg2 viewportChanged:(CDUnknownFunctionPointerType)arg3 drawInContext:(CDUnknownFunctionPointerType)arg4;
- (void)clear:(struct CGRect)arg1;
- (void)setVideoBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end

