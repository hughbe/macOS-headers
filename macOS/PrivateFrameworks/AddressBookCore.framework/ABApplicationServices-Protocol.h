//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class NSString, NSWindow;

@protocol ABApplicationServices <NSObject>
- (void)showMCCConfigForAccountID:(NSString *)arg1;
- (void)showPasswordPanelModalForWindow:(NSWindow *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, BOOL))arg3;
- (void)showContactWithUniqueId:(NSString *)arg1 shouldUnify:(BOOL)arg2;
@end

