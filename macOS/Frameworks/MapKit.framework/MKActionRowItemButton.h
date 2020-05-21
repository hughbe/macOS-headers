//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class MKPlaceCardActionItem;
@protocol MKActionRowItemViewDelegate;

__attribute__((visibility("hidden")))
@interface MKActionRowItemButton : NSButton
{
    id <MKActionRowItemViewDelegate> _delegate;
    MKPlaceCardActionItem *_actionRowItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKPlaceCardActionItem *actionRowItem; // @synthesize actionRowItem=_actionRowItem;
@property(nonatomic) __weak id <MKActionRowItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePress;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithActionRowItem:(id)arg1 delegate:(id)arg2;

@end

