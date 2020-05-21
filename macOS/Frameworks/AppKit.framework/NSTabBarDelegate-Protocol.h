//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSEvent, NSImage, NSMenu, NSString, NSTabBar, NSTabBarItem, NSWindow;
@protocol NSDraggingInfo, NSTabDraggingInfo;

@protocol NSTabBarDelegate <NSObject>
- (BOOL)tabBar:(NSTabBar *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBar:(NSTabBar *)arg1 validateDrop:(id <NSDraggingInfo>)arg2;
- (void)tabBar:(NSTabBar *)arg1 didFinishTransitionAnimationForWindow:(NSWindow *)arg2;
- (NSWindow *)tabBar:(NSTabBar *)arg1 destinationWindowForDetachedTabBarViewItem:(NSTabBarItem *)arg2;
- (NSImage *)tabBar:(NSTabBar *)arg1 detachedWindowImageForDraggedTabBarViewItem:(NSTabBarItem *)arg2;
- (BOOL)tabBar:(NSTabBar *)arg1 acceptTabDrop:(id <NSTabDraggingInfo>)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBar:(NSTabBar *)arg1 validateTabDrop:(id <NSTabDraggingInfo>)arg2;
- (NSMenu *)tabBar:(NSTabBar *)arg1 menuForTabBarViewItem:(NSTabBarItem *)arg2 event:(NSEvent *)arg3;
- (void)tabBar:(NSTabBar *)arg1 didMoveTabBarViewItem:(NSTabBarItem *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 isChangingPinnedness:(BOOL)arg5;
- (void)tabBar:(NSTabBar *)arg1 closeTabBarViewItem:(NSTabBarItem *)arg2;
- (NSTabBarItem *)selectedTabBarViewItemAfterClosingCurrentTabInTabBar:(NSTabBar *)arg1;
- (void)tabBar:(NSTabBar *)arg1 selectTabBarViewItem:(NSTabBarItem *)arg2;
- (void)createNewTabInTabBar:(NSTabBar *)arg1;

@optional
- (void)tabBar:(NSTabBar *)arg1 showWindowForDraggingItemAtIndex:(unsigned long long)arg2;
- (void)tabBar:(NSTabBar *)arg1 hideWindowForDraggingItemAtIndex:(unsigned long long)arg2;
- (BOOL)tabBar:(NSTabBar *)arg1 canCloseTabBarViewItem:(NSTabBarItem *)arg2;
- (NSString *)placeholderTextInEmptyUnpinnedRegionOfTabBar:(NSTabBar *)arg1;
- (BOOL)tabBar:(NSTabBar *)arg1 canDetachTabBarViewItem:(NSTabBarItem *)arg2;
- (BOOL)tabBar:(NSTabBar *)arg1 canDragToPinTab:(NSTabBarItem *)arg2;
- (void)tabBar:(NSTabBar *)arg1 didBeginDraggingTab:(NSTabBarItem *)arg2;
- (BOOL)tabBarCanDragItems:(NSTabBar *)arg1;
- (BOOL)tabBar:(NSTabBar *)arg1 droppedWindowTabShouldMoveToSpace:(long long)arg2;
@end

