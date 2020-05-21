//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VisualTabPickerLayoutEngineInputProvider;

__attribute__((visibility("hidden")))
@interface VisualTabPickerLayoutEngine : NSObject
{
    double _tileWidth;
    double _tileHeight;
    double _horizontalMargin;
    double _horizontalInset;
    struct CGRect _bounds;
    double _tileHeightToWidthRatio;
    BOOL _leftToRight;
    id <VisualTabPickerLayoutEngineInputProvider> _inputProvider;
    unsigned long long _numberOfTiles;
    unsigned long long _maximumTilesPerRow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maximumTilesPerRow; // @synthesize maximumTilesPerRow=_maximumTilesPerRow;
@property(readonly, nonatomic) unsigned long long numberOfTiles; // @synthesize numberOfTiles=_numberOfTiles;
@property(readonly, nonatomic) __weak id <VisualTabPickerLayoutEngineInputProvider> inputProvider; // @synthesize inputProvider=_inputProvider;
- (void)_recomputeTileSize;
- (double)_computedHorizontalMargin;
- (void)_recomputeHorizontalInsets;
- (void)_recomputeMaximumTilesPerRow;
- (void)_updateInputs;
- (struct CGRect)frameForTileAtIndex:(unsigned long long)arg1;
- (void)recomputeLayout;
- (id)initWithInputProvider:(id)arg1;
- (id)init;

@end

