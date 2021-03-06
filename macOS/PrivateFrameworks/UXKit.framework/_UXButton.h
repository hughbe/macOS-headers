//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSMutableDictionary;

@interface _UXButton : NSButton
{
    NSMutableDictionary *_titlesByState;
    NSMutableDictionary *_titleAttributesByState;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)_textColorForState:(unsigned long long)arg1;
- (id)_attributedStringForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)tintColorDidChange;
- (void)setTitleAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

