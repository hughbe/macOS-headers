//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSColorList, NSImage, NSIndexPath, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface NSColorPickerGridView : NSView
{
    id <NSColorPickerGridViewDelegate> _delegate;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    NSColor *_selectedColor;
    NSColorList *_colorList;
    NSIndexPath *_hoveredIndexPath;
    NSTrackingArea *_trackArea;
    NSImage *_image;
    struct {
        unsigned int _emptyEnabled:1;
        unsigned int _reserved:30;
    } _flags;
}

+ (id)defaultColorList;
@property id <NSColorPickerGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)_accessibilityAttributeValue:(id)arg1 forIndexedChild:(id)arg2;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_accessibilityChildren;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)selectColorAtIndex:(unsigned long long)arg1;
- (struct CGRect)rectForColorAtIndex:(unsigned long long)arg1;
- (id)colorAtIndex:(unsigned long long)arg1;
- (unsigned long long)_accessibilityIndexForIndexPath:(id)arg1;
- (id)_indexPathForAccessibilityIndex:(unsigned long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)_selectColor:(id)arg1 withIndexPath:(id)arg2;
- (void)selectColorAtIndexPath:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (struct CGRect)_rectForColorAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 expanded:(double)arg3;
- (struct CGRect)_rectForColorAtIndexPath:(id)arg1 expanded:(double)arg2;
- (struct CGRect)_rectForColorAtIndexPath:(id)arg1;
- (id)_bezierPathForColorAtIndexPath:(id)arg1;
- (id)_colorIndexPathAtPoint:(struct CGPoint)arg1;
- (id)_colorAtIndexPath:(id)arg1;
- (id)_indexPathForColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(copy) NSColor *selectedColor;
@property(getter=isEmptyColorEnabled) BOOL emptyColorEnabled;
- (void)setColorList:(id)arg1;
@property(readonly) NSColorList *colorList; // @synthesize colorList=_colorList;
- (void)setSwatchSize:(struct CGSize)arg1;
@property unsigned long long numberOfColumns;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_updateConfigs;
- (id)image;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

