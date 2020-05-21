//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BrowserWindowController, NSMenu, ToolbarController;

@protocol ToolbarControllerDelegate <NSObject>
- (BrowserWindowController *)toolbarItemTargetForToolbarController:(ToolbarController *)arg1;
- (void)mouseDownInVisualTabPickerButtonInToolbarController:(ToolbarController *)arg1;
- (void)mouseDidExitVisualTabPickerButtonInToolbarController:(ToolbarController *)arg1;
- (NSMenu *)forwardMenuForBackForwardSegmentedControlInToolbarController:(ToolbarController *)arg1;
- (NSMenu *)backMenuForBackForwardSegmentedControlInToolbarController:(ToolbarController *)arg1;
- (BOOL)shouldAllowUserCustomizationForToolbarController:(ToolbarController *)arg1;
@end

