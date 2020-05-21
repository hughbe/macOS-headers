//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextField.h>

@interface LUITextField : NSTextField
{
}

+ (Class)cellClass;
+ (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (id)designatedFocusRingView;
- (void)setShouldSmoothFonts:(BOOL)arg1;
- (BOOL)shouldSmoothFonts;
- (id)_placeholderTextColor;
- (id)_textColor;

@end

