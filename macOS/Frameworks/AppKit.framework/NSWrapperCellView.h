//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSCell;

__attribute__((visibility("hidden")))
@interface NSWrapperCellView : NSView
{
    NSCell *_cell;
    BOOL _groupRowStyle;
}

+ (Class)cellClass;
@property(retain, nonatomic) NSCell *cell; // @synthesize cell=_cell;
@property(nonatomic, getter=isGroupRowStyle) BOOL groupRowStyle; // @synthesize groupRowStyle=_groupRowStyle;
- (Class)_animatorClass;
- (int)_trackingAreasDirty;
- (void)_setTrackingAreasDirty:(int)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)_focusInto:(id)arg1 withClip:(BOOL)arg2;
- (BOOL)wantsDefaultClipping;
- (BOOL)isOpaque;
- (void)setObjectValue:(id)arg1;
- (id)_enclosingTableView;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

