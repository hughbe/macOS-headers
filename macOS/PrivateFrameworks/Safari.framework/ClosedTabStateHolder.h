//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserTabPersistentState, BrowserWindowController;

__attribute__((visibility("hidden")))
@interface ClosedTabStateHolder : NSObject
{
    BrowserWindowController *_browserWindowController;
    BrowserTabPersistentState *_lastClosedTabState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrowserTabPersistentState *lastClosedTabState; // @synthesize lastClosedTabState=_lastClosedTabState;
@property(readonly, nonatomic) BrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
- (void)_closeTabWithoutConfirming:(id)arg1;
- (void)_undoCloseTabAtIndex:(unsigned long long)arg1 andSelect:(BOOL)arg2;
- (void)clearLastClosedTabState;
- (id)initWithBrowserWindowController:(id)arg1;

@end

