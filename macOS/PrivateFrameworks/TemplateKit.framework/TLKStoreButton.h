//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKSButton.h>

@class NSView, TLKLabel, TLKProminenceView;

@interface TLKStoreButton : TLKSButton
{
    BOOL _isEmphasized;
    TLKLabel *_label;
    NSView *_backgroundView;
    TLKProminenceView *_highlightView;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property BOOL isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(retain) TLKProminenceView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) TLKLabel *label; // @synthesize label=_label;
- (id)accessibilityTitle;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)allowsVibrancy;
- (void)setBackgroundStyle:(long long)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void)setTitle:(id)arg1;
- (id)title;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)layout;
- (void)setHighlighted:(BOOL)arg1;
- (id)init;

@end

