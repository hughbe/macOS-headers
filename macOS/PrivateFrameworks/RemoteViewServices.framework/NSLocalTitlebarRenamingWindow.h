//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteViewServices/NSLocalWindowWrappingRemoteWindow.h>

@class NSRemoteTitlebarRenamingSession;

@interface NSLocalTitlebarRenamingWindow : NSLocalWindowWrappingRemoteWindow
{
    NSRemoteTitlebarRenamingSession *_session;
}

- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (void)resignKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_sharesParentKeyState;
- (void)_setSession:(id)arg1;

@end

