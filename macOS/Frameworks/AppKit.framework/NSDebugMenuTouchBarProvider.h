//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSDebugMenuItemProvider-Protocol.h>
#import <AppKit/NSWindowDelegate-Protocol.h>

@class NSMenuItem, NSPanel, NSString, NSWindow;
@protocol NSDebugTouchBarUIDelegate;

__attribute__((visibility("hidden")))
@interface NSDebugMenuTouchBarProvider : NSObject <NSWindowDelegate, NSDebugMenuItemProvider>
{
    NSMenuItem *_menuItem;
    NSPanel *_panel;
    NSWindow *_observedWindow;
    id <NSDebugTouchBarUIDelegate> _uiDelegate;
    BOOL _observingPanelVisibility;
    BOOL _observingKeyWindow;
}

- (void).cxx_destruct;
@property __weak id <NSDebugTouchBarUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)updateTouchBarProviderChain;
- (void)switchObservedWindow:(id)arg1;
- (void)toggleObservingKeyWindow:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_sharedPanel;
- (void)toggleResponderChainPanel:(id)arg1;
@property(readonly, copy) NSMenuItem *menuItem;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

