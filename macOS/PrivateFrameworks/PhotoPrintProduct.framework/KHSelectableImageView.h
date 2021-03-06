//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSString;
@protocol KHSelectableImageViewDelegate;

@interface KHSelectableImageView : NSImageView
{
    BOOL _selected;
    BOOL _acceptsFirstMouse;
    BOOL _showsSelectionLabel;
    NSString *_selectionLabel;
    id <KHSelectableImageViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <KHSelectableImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *selectionLabel; // @synthesize selectionLabel=_selectionLabel;
@property BOOL showsSelectionLabel; // @synthesize showsSelectionLabel=_showsSelectionLabel;
@property BOOL acceptsFirstMouse; // @synthesize acceptsFirstMouse=_acceptsFirstMouse;
@property BOOL selected; // @synthesize selected=_selected;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

