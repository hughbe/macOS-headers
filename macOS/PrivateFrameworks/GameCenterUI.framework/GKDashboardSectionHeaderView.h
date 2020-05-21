//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSUICollectionReusableView.h>

@class NSColor, NSFont, NSLayoutConstraint, NSString, NSTextField;

@interface GKDashboardSectionHeaderView : NSUICollectionReusableView
{
    BOOL _onDarkBackground;
    NSTextField *_titleLabel;
    NSLayoutConstraint *_leftMarginConstraint;
    NSColor *_titleColor;
    NSLayoutConstraint *_rightMarginConstraint;
}

+ (struct CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2;
+ (double)widthForTitle:(id)arg1 withFont:(id)arg2;
+ (double)defaultHeight;
- (void).cxx_destruct;
@property(nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) BOOL onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)awakeFromNib;

@end

