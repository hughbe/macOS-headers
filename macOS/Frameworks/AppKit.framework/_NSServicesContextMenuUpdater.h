//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/_NSServicesMenuUpdater.h>

@class NSMenu, NSMenuItem;

__attribute__((visibility("hidden")))
@interface _NSServicesContextMenuUpdater : _NSServicesMenuUpdater
{
    id _requestorChain;
    NSMenu *_pluggingMenu;
    NSMenu *_pluggedMenu;
    NSMenuItem *_submenuItem;
}

- (void)updateForLiveServicesChangedNotification:(id)arg1;
- (id)menus;
- (void)performServiceFromEntry:(id)arg1;
- (void)populateMenu:(id)arg1 withServiceEntries:(id)arg2 forDisplay:(BOOL)arg3;
- (id)menuContext;
- (unsigned long long)serviceEntryKinds;
- (void)dealloc;
- (void)dispose;
- (id)initWithMenuRef:(struct OpaqueMenuRef *)arg1 correspondingToMenu:(id)arg2 withRequestorChain:(id)arg3;

@end

