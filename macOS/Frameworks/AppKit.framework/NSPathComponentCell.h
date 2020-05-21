//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSImage, NSURL;

@interface NSPathComponentCell : NSTextFieldCell
{
    NSImage *_image;
    double _fullWidth;
    double _resizedWidth;
    double _currentWidth;
    NSURL *_url;
    struct {
        unsigned int shouldDrawArrow:1;
        unsigned int drawsAsNavigationBar:1;
        unsigned int isFirstItem:1;
        unsigned int isLastItem:1;
        unsigned int isDropTarget:1;
        unsigned int reserved:27;
    } _flags;
    NSImage *_originalImage;
}

+ (struct CGSize)_iconSizeForControlSize:(unsigned long long)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1 imageRect:(struct CGRect)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)_interiorContentValueInView:(id)arg1;
- (long long)_interiorContentStateInView:(id)arg1;
- (BOOL)_shouldDrawHighlightRect;
- (BOOL)_shouldStyleUneditableTextInView:(id)arg1;
- (long long)_contentBacking;
- (id)_effectiveContentStyleForArrowInView:(id)arg1;
- (id)_appearanceContentStyleInView:(id)arg1;
- (long long)interiorBackgroundStyle;
- (BOOL)_shouldDrawRTL;
- (BOOL)_shouldHighlightDropTarget;
- (BOOL)_textDimsWhenDisabled;
- (struct CGSize)_iconSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawNavigationBarBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setCurrentWidth:(double)arg1;
- (double)_currentWidth;
- (void)_setResizedWidth:(double)arg1;
- (double)_resizedWidth;
- (long long)_compareToCell:(id)arg1;
- (double)_minWidth;
- (void)setFont:(id)arg1;
- (double)_fullWidth;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (double)_overlapAmount;
- (id)_textAttributes;
- (void)_setShouldDrawArrowYes;
- (void)_setShouldDrawArrow:(BOOL)arg1;
- (BOOL)_shouldDrawArrow;
- (void)_setIsLastItem:(BOOL)arg1;
- (BOOL)_isLastItem;
- (void)_setIsFirstItem:(BOOL)arg1;
- (BOOL)_isFirstItem;
- (void)_setDrawsAsNavigationBar:(BOOL)arg1;
- (BOOL)_drawsAsNavigationBar;
- (void)setBaseWritingDirection:(long long)arg1;
@property(copy) NSURL *URL;
@property(retain) NSImage *image;
- (void)_setIsDropTarget:(BOOL)arg1;
- (BOOL)_isDropTarget;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

