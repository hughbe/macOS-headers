//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDAccountChangeHookResponder-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDAccountECAccountTransformer, EDPersistenceHookRegistry, NSMutableSet, NSString;
@protocol EDAccountsProvider;

@interface EDAccountRepository : NSObject <EFLoggable, EDAccountChangeHookResponder>
{
    NSMutableSet *_observers;
    struct os_unfair_lock_s _lock;
    EDAccountECAccountTransformer *_transformer;
    id <EDAccountsProvider> _accountsProvider;
    EDPersistenceHookRegistry *_hookRegistry;
}

+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) __weak EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(retain, nonatomic) id <EDAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
@property(retain) EDAccountECAccountTransformer *transformer; // @synthesize transformer=_transformer;
- (void)accountsChanged:(id)arg1;
- (void)accountsRemoved:(id)arg1;
- (void)accountsAdded:(id)arg1;
- (id)transformAccounts:(id)arg1;
- (void)allAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)allAccounts;
- (void)dealloc;
- (id)initWithAccountsProvider:(id)arg1 hookRegistry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

