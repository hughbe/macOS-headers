//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrubberSelectionView.h>

@interface NSScrubberOutlineSelectionOverlayView : NSScrubberSelectionView
{
    unsigned int _previousDrawSelected:1;
    unsigned int _previousDrawHighlight:1;
    unsigned int _allowsHighlight:1;
    unsigned int _reservedOverlayFlags:29;
}

- (double)itemCornerRadius;
@property BOOL showsHighlight;
- (struct __CFDictionary *)_coreUIDrawOptions;
- (void)updateLayer;
- (BOOL)_shouldDraw;
- (void)_previousDrawStateSelected:(char *)arg1 highlighted:(char *)arg2;
- (void)_setPreviousDrawStateSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (struct NSEdgeInsets)alignmentRectInsets;
- (BOOL)wantsUpdateLayer;
- (void)encodeWithCoder:(id)arg1;
- (void)_outlineCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

