//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSNotification, NSPopover, NSWindow;

@protocol NSPopoverDelegate <NSObject>

@optional
- (void)popoverDidClose:(NSNotification *)arg1;
- (void)popoverWillClose:(NSNotification *)arg1;
- (void)popoverDidShow:(NSNotification *)arg1;
- (void)popoverWillShow:(NSNotification *)arg1;
- (NSWindow *)detachableWindowForPopover:(NSPopover *)arg1;
- (void)popoverDidDetach:(NSPopover *)arg1;
- (BOOL)popoverShouldDetach:(NSPopover *)arg1;
- (BOOL)popoverShouldClose:(NSPopover *)arg1;
@end

