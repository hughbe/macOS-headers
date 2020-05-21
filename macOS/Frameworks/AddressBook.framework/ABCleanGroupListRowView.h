//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

#import <AddressBook/ABGroupListRowView-Protocol.h>

@class NSString;

@interface ABCleanGroupListRowView : NSTableRowView <ABGroupListRowView>
{
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)addTrackingAreaToVisibleRect;
- (void)enumerateGroupListCellViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSelectionAppearanceOfCellViews;
- (BOOL)mouseDownCanMoveWindow;
- (void)ABBookGroupListRowView_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

