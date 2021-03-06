//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSColor, NSImage;

@interface NSLevelIndicator : NSControl
{
}

+ (id)defaultAnimationForKey:(id)arg1;
+ (void)initialize;
@property(retain) NSImage *ratingPlaceholderImage;
@property(retain) NSImage *ratingImage;
@property long long placeholderVisibility;
@property BOOL drawsTieredCapacityLevels;
- (void)setCustomCriticalFillColor:(id)arg1;
- (id)customCriticalFillColor;
- (void)setCustomWarningFillColor:(id)arg1;
- (id)customWarningFillColor;
- (void)setCustomFillColor:(id)arg1;
- (id)customFillColor;
@property(copy) NSColor *criticalFillColor;
@property(copy) NSColor *warningFillColor;
@property(copy) NSColor *fillColor;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
- (void)setAlwaysDrawRatingPlaceholder:(BOOL)arg1;
- (BOOL)alwaysDrawRatingPlaceholder;
@property long long numberOfMajorTickMarks;
@property long long numberOfTickMarks;
@property unsigned long long tickMarkPosition;
@property double criticalValue;
@property double warningValue;
@property double maxValue;
@property double minValue;
@property(getter=isEditable) BOOL editable;
- (double)firstBaselineOffsetFromTop;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (BOOL)isFlipped;
@property unsigned long long levelIndicatorStyle;
- (id)ns_widgetType;

@end

