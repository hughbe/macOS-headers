//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CUIThemeFacet;

__attribute__((visibility("hidden")))
@interface CUIMaskedFacetLayer : CALayer
{
    struct CGPath *_maskPath;
    CUIThemeFacet *_facet;
    long long _drawingLayer;
}

@property long long drawingLayer; // @synthesize drawingLayer=_drawingLayer;
@property(retain, nonatomic) CUIThemeFacet *facet; // @synthesize facet=_facet;
@property(nonatomic) struct CGPath *maskPath; // @synthesize maskPath=_maskPath;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;
- (id)init;

@end

