//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor;

@interface NSButton (SafariNSButtonExtras)
+ (id)safari_buttonStyledForFunctionBarWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)safari_buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)safari_buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)safari_styleForFunctionBar;
@property(retain, nonatomic, setter=safari_setTextColor:) NSColor *safari_textColor;
- (id)menuItemForm;
@end

