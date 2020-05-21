//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNDelegateAccountSink-Protocol.h>
#import <ContactsFoundation/CNDelegateAccountSource-Protocol.h>

@class ACAccount, ACAccountStore, NSString;

@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSource, CNDelegateAccountSink>
{
    ACAccount *_parentAccount;
    ACAccountStore *_accountStore;
}

+ (void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3;
+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) ACAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
- (id)removeAccount:(id)arg1;
- (id)updateAccount:(id)arg1;
- (id)addChildWithDelegateInfo:(id)arg1;
- (BOOL)updateAccounts:(id)arg1 error:(id *)arg2;
- (id)primaryAccount;
- (id)delegateAccounts;
@property(readonly, copy) NSString *description;
- (id)initWithParentAccount:(id)arg1 accountStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

