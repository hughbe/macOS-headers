//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSTouchBarCustomizationPaletteViewController, NSTouchBarItem;

@protocol NSTouchBarCustomizationPaletteViewControllerDelegate <NSObject>
- (void)controllerAccessibilityResetTouchBar:(NSTouchBarCustomizationPaletteViewController *)arg1;
- (void)controller:(NSTouchBarCustomizationPaletteViewController *)arg1 accessibilityAddItem:(NSTouchBarItem *)arg2;
- (void)controllerDidEndDragging:(NSTouchBarCustomizationPaletteViewController *)arg1;
- (void)controllerWillBeginDragging:(NSTouchBarCustomizationPaletteViewController *)arg1;
@end

