//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionReusableView.h>

@class NSView;

@interface UXCollectionViewCell : UXCollectionReusableView
{
    NSView *_contentView;
    BOOL _selected;
    BOOL _selectionBorderShouldUsePrimaryColor;
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL selectionBorderShouldUsePrimaryColor; // @synthesize selectionBorderShouldUsePrimaryColor=_selectionBorderShouldUsePrimaryColor;
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_accessibilityIndexPath;
- (id)_accessibilityDefaultRole;
- (id)_dynamicAccessibilityParent;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)isAccessibilitySelected;
- (id)_axSimulateClick:(unsigned long long)arg1 withNumberOfClicks:(unsigned long long)arg2;
- (void)_axPerformDoubleClick;
- (BOOL)accessibilityPerformPress;

@end

