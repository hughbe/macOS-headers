//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface SidebarTableRowView : NSTableRowView
{
    NSVisualEffectView *_selectionBackgroundView;
    BOOL _shouldDrawSelectionOnlyWhenEmphasized;
    BOOL _highlighted;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL shouldDrawSelectionOnlyWhenEmphasized; // @synthesize shouldDrawSelectionOnlyWhenEmphasized=_shouldDrawSelectionOnlyWhenEmphasized;
- (void)_updateSelectedBackgroundView;
- (BOOL)_shouldDrawSelectionBackground;
- (long long)interiorBackgroundStyle;
- (void)setEmphasized:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end

