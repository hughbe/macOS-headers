//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/NSObject-Protocol.h>

@class CNFamilyMemberWhitelistedContactsViewController, NSViewController;

@protocol CNFamilyMemberWhitelistedContactsViewControllerDelegate <NSObject>
- (void)whitelistedContactsViewController:(CNFamilyMemberWhitelistedContactsViewController *)arg1 dismissViewController:(NSViewController *)arg2;
- (void)whitelistedContactsViewController:(CNFamilyMemberWhitelistedContactsViewController *)arg1 presentViewController:(NSViewController *)arg2;

@optional
- (void)helpButtonPressedWhitelistedContactsViewController:(CNFamilyMemberWhitelistedContactsViewController *)arg1;
- (void)whitelistedContactsDidChangeWhitelistedContactsViewController:(CNFamilyMemberWhitelistedContactsViewController *)arg1;
@end

