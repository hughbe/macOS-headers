//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, NSUndoManager, VSAccount, VSKeychainEditingContext, VSRemoteNotifier;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate>
{
    BOOL _needsUpdateCachedFirstAccount;
    VSAccount *_cachedFirstAccount;
    VSKeychainEditingContext *_keychainEditingContext;
    NSOperationQueue *_keychainQueue;
    id _changeObserver;
    VSRemoteNotifier *_remoteNotifier;
}

+ (Class)accountClass;
- (void).cxx_destruct;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(nonatomic) __weak id changeObserver; // @synthesize changeObserver=_changeObserver;
@property(retain, nonatomic) NSOperationQueue *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
@property(retain, nonatomic) VSKeychainEditingContext *keychainEditingContext; // @synthesize keychainEditingContext=_keychainEditingContext;
@property BOOL needsUpdateCachedFirstAccount; // @synthesize needsUpdateCachedFirstAccount=_needsUpdateCachedFirstAccount;
@property(retain) VSAccount *cachedFirstAccount; // @synthesize cachedFirstAccount=_cachedFirstAccount;
- (void)removeAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_insertAccount:(id)arg1 inContext:(id)arg2;
- (void)fetchAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *accounts;
- (id)firstAccount;
- (BOOL)_updateCachedFirstAccount;
- (id)firstAccountIfLoaded;
- (BOOL)isFirstAccountLoaded;
@property(retain, nonatomic) NSUndoManager *undoManager;
- (id)_keychainItemsWithLimit:(unsigned long long)arg1;
- (id)_accountForKeychainItem:(id)arg1 simulateExpiredToken:(BOOL)arg2;
- (void)_sendRemoteNotification;
- (void)_sendLocalNotification;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

