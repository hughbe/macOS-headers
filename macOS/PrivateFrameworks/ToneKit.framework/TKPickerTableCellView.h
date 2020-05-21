//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSLayoutConstraint, NSString, NSTextField;

@interface TKPickerTableCellView : NSView
{
    NSTextField *_textField;
    NSTextField *_detailTextField;
    NSView *_textContainerView;
    NSImageView *_checkmarkView;
    NSLayoutConstraint *_textContainerViewRightConstraint;
    BOOL _showsCheckmark;
}

+ (double)intrinsicHeight;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsCheckmark; // @synthesize showsCheckmark=_showsCheckmark;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *text;
- (void)_removeCheckmark;
- (void)_addCheckmark;
- (void)_configureTextFieldAsWideButShrinkable:(id)arg1 withOtherTextField:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

