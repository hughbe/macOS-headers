//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSAttributedString, WBSSavedPassword;

@protocol PasswordsAuditingHandler <NSObject>
- (void)changePasswordForSavedPassword:(WBSSavedPassword *)arg1;
- (NSAttributedString *)warningStringForSavedPassword:(WBSSavedPassword *)arg1;
@end

