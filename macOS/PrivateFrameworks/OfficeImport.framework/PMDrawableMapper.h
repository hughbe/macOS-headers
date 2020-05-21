//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, OADShape;

__attribute__((visibility("hidden")))
@interface PMDrawableMapper : CMDrawableMapper
{
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    BOOL mTopLevelMapper;
}

- (void).cxx_destruct;
- (void)mapBounds;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)slideRect;
- (BOOL)isTopLevelMapper;
- (void)setTopLevelMapper:(BOOL)arg1;
- (id)drawingContext;
- (void)setDrawingContext:(id)arg1;
- (struct CGRect)transformRectToPage:(struct CGRect)arg1;
- (struct CGRect)shapeTextBoxWithState:(id)arg1;
- (void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(struct CGRect *)arg3 state:(id)arg4;
- (void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;

@end

