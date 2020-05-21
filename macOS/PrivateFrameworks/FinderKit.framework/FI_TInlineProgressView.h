//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

#import <FinderKit/NSAccessibilityProgressIndicator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TInlineProgressView : FI_TUpdateLayerView <NSAccessibilityProgressIndicator>
{
    _Bool _dimmed;
    struct TNSRef<FI_TPieChartProgressLayer, void> _pieChartLayer;
    struct TNSRef<NSImageView, void> _templateImageView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (id)accessibilityValue;
- (_Bool)isProgressAnimationCompleted;
- (void)setProgressDidCompleteHandler:(const function_b1fce659 *)arg1;
@property(nonatomic) double progress; // @dynamic progress;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

