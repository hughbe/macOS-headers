//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImage, NSImageView, NSLayoutConstraint, NSTextField, RolloverImageButton;
@protocol BookmarksSidebarTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface BookmarksSidebarTableCellView : NSTableCellView
{
    BOOL _usesFolderStyle;
    BOOL _usesFavoriteStyle;
    id <BookmarksSidebarTableCellViewDelegate> _delegate;
    NSImage *_bookmarkIconImage;
    NSLayoutConstraint *_textFieldRightMarginConstraintWhenEditing;
    NSImageView *_faviconView;
    NSTextField *_bookmarkTitleTextField;
    RolloverImageButton *_removeButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RolloverImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSTextField *bookmarkTitleTextField; // @synthesize bookmarkTitleTextField=_bookmarkTitleTextField;
@property(nonatomic) __weak NSImageView *faviconView; // @synthesize faviconView=_faviconView;
@property(retain, nonatomic) NSLayoutConstraint *textFieldRightMarginConstraintWhenEditing; // @synthesize textFieldRightMarginConstraintWhenEditing=_textFieldRightMarginConstraintWhenEditing;
@property(retain, nonatomic) NSImage *bookmarkIconImage; // @synthesize bookmarkIconImage=_bookmarkIconImage;
@property(nonatomic) BOOL usesFavoriteStyle; // @synthesize usesFavoriteStyle=_usesFavoriteStyle;
@property(nonatomic) BOOL usesFolderStyle; // @synthesize usesFolderStyle=_usesFolderStyle;
@property(nonatomic) __weak id <BookmarksSidebarTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)bookmarksSidebarTitleTextViewResignFirstResponder:(id)arg1;
- (void)bookmarksSidebarTitleTextViewBecameFirstResponder:(id)arg1;
- (void)didPressRemoveButton:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)_updateIconImage;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)awakeFromNib;

@end

