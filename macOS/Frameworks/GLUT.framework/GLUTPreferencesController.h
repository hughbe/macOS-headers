//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSPopUpButton, NSTabView, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface GLUTPreferencesController : NSWindowController
{
    NSTabView *prefsTabView;
    NSButton *launchUseMacOSXCoords;
    NSButton *launchUseCurrWD;
    NSButton *launchUseExtendedDesktop;
    NSButton *launchIconic;
    NSButton *launchDebugMode;
    NSButton *launchGamemodeCaptureSingle;
    NSButton *launchSyncToVBL;
    NSTextField *launchInitWidth;
    NSTextField *launchInitHeight;
    NSTextField *launchInitX;
    NSTextField *launchInitY;
    NSTextField *launchMenuIdle;
    NSTextField *launchFadeTime;
    NSTextField *mouseDetected;
    NSButton *mouseEmulation;
    NSPopUpButton *mouseMiddleConfigMenu;
    NSPopUpButton *mouseRightConfigMenu;
    NSTextField *mouseAssignWarningText;
    NSImageView *mouseAssignWarningIcon;
    NSView *mouseTabItemView;
    NSPopUpButton *joyDeviceMenu;
    NSPopUpButton *joyInputMenu;
    NSButton *joyInverted;
    NSButton *joyAssign;
    NSTextField *joyElement;
    NSTextField *joyAssignNote;
    NSImageView *joyAssignWarningIcon;
    NSView *joyTabItemView;
    NSPopUpButton *spaceDeviceMenu;
    NSPopUpButton *spaceInputMenu;
    NSButton *spaceInverted;
    NSButton *spaceReAssign;
    NSTextField *spaceElement;
    NSTextField *spaceAssignNote;
    NSImageView *spaceAssignWarningIcon;
    NSView *spaceTabItemView;
    BOOL updatingDevices;
}

- (unsigned int)indexToModifier:(int)arg1;
- (int)modifierToIndex:(unsigned int)arg1;
- (void)updateMouseState;
- (void)mouseRightMenu:(id)arg1;
- (void)mouseMiddleMenu:(id)arg1;
- (void)mouseEanbleEmulation:(id)arg1;
- (void)spaceInvert:(id)arg1;
- (void)spaceElement:(id)arg1;
- (void)spaceAssign:(id)arg1;
- (void)spaceDevice:(id)arg1;
- (void)joyInvert:(id)arg1;
- (void)joyElement:(id)arg1;
- (void)joyAssign:(id)arg1;
- (void)joyDevice:(id)arg1;
- (void)updateLaunchState;
- (void)launchGamemodeCaptureSingle:(id)arg1;
- (void)launchDebugMode:(id)arg1;
- (void)launchIconic:(id)arg1;
- (void)launchUseExtDesktop:(id)arg1;
- (void)launchUseCurrWD:(id)arg1;
- (void)launchUseMacOSCoords:(id)arg1;
- (void)updateObjectState;
- (void)waitForDevicesThread;
- (void)updateDevicesThread:(id)arg1;
- (void)updateUI:(id)arg1;
- (void)updateDevicesUI:(id)arg1;
- (void)updateLaunchUI:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)setDefault:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)windowDidLoad;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

