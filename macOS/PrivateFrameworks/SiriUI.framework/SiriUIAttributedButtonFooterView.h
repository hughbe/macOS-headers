//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIReusableFooterView.h>

@class NSButton, NSImageView, NSStackView, NSTextField;

@interface SiriUIAttributedButtonFooterView : SiriUIReusableFooterView
{
    NSButton *_containingButton;
    NSStackView *_stackView;
    NSTextField *_label;
    NSImageView *_attributionIcon;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain) NSImageView *attributionIcon; // @synthesize attributionIcon=_attributionIcon;
@property(retain) NSTextField *label; // @synthesize label=_label;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) NSButton *containingButton; // @synthesize containingButton=_containingButton;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (struct NSEdgeInsets)edgeInsets;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setAttributionImage:(id)arg1;
- (void)setText:(id)arg1;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

