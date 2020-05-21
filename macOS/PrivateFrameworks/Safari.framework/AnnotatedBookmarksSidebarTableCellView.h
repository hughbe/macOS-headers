//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <Safari/NSControlTextEditingDelegate-Protocol.h>

@class NSString;
@protocol AnnotatedBookmarksSidebarTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface AnnotatedBookmarksSidebarTableCellView : NSTableCellView <NSControlTextEditingDelegate>
{
    id <AnnotatedBookmarksSidebarTableCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AnnotatedBookmarksSidebarTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (BOOL)accessibilityPerformShowMenu;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)editTitle;
- (void)didRecognizeLongPress:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

