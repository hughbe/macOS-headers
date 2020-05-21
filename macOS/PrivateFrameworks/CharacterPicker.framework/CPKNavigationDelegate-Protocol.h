//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CharacterPicker/NSObject-Protocol.h>

@protocol CPKNavigationSender;

@protocol CPKNavigationDelegate <NSObject>

@optional
- (void)navigatorDidCancelNavigation:(id <CPKNavigationSender>)arg1;
- (void)navigatorDidConfirmNavigation:(id <CPKNavigationSender>)arg1;
- (void)navigator:(id <CPKNavigationSender>)arg1 didNavigateTarget:(int)arg2 direction:(int)arg3;
- (void)navigator:(id <CPKNavigationSender>)arg1 canSetActiveNavigationTarget:(BOOL)arg2 direction:(int)arg3;
@end

