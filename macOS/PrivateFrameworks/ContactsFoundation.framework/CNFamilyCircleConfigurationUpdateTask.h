//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNTask.h>

@class ACAccountStore, CNResult, NSMutableArray;
@protocol CNDelegateAccountSink, CNDelegateAccountSource;

@interface CNFamilyCircleConfigurationUpdateTask : CNTask
{
    id <CNDelegateAccountSource> _accountSource;
    id <CNDelegateAccountSink> _accountSink;
    ACAccountStore *_accountStore;
    NSMutableArray *_delegateAccounts;
    CNResult *_result;
}

+ (id)os_log;
- (void).cxx_destruct;
@property(retain, nonatomic) CNResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) NSMutableArray *delegateAccounts; // @synthesize delegateAccounts=_delegateAccounts;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) id <CNDelegateAccountSink> accountSink; // @synthesize accountSink=_accountSink;
@property(readonly, nonatomic) id <CNDelegateAccountSource> accountSource; // @synthesize accountSource=_accountSource;
- (void)updateDelegateAccounts;
- (void)loadDefaultSinkIfNecessary;
- (void)loadDelegateAccountsFromSource;
- (void)loadDefaultSourceIfNecessary;
- (id)run:(id *)arg1;
- (id)description;
- (id)initWithAccountSource:(id)arg1 accountSink:(id)arg2 accountStore:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)init;

@end

