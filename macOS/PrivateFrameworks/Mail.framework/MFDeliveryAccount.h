//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFAccount.h>

#import <Mail/EDAccount-Protocol.h>
#import <Mail/EDDeliveryAccount-Protocol.h>

@class ACAccount, MFMailAccount, NSArray, NSString;

@interface MFDeliveryAccount : MFAccount <EDAccount, EDDeliveryAccount>
{
    unsigned long long _maximumMessageBytes;
}

+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3 addToDeliveryAccountsIfNeeded:(BOOL)arg4;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountWithDomain:(id)arg1;
+ (id)accountWithParentIdentifier:(id)arg1;
+ (id)_accountFromCollection:(id)arg1 withIdentifier:(id)arg2;
+ (id)accountWithIdentifier:(id)arg1;
+ (void)saveAccountInfoToDefaults;
+ (void)_postDeliveryAccountsHaveChanged;
+ (void)unregisterDynamicAccount:(id)arg1;
+ (void)registerDynamicAccount:(id)arg1;
+ (void)removeDeliveryAccount:(id)arg1;
+ (void)insertObjectInDeliveryAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)addDeliveryAccount:(id)arg1;
+ (void)setDeliveryAccounts:(id)arg1;
+ (id)deliveryAccounts;
+ (id)_deliveryAccounts;
+ (void)reloadDeliveryAccounts;
+ (void)initialize;
@property(nonatomic) unsigned long long maximumMessageBytes; // @synthesize maximumMessageBytes=_maximumMessageBytes;
@property(readonly, copy, nonatomic) NSArray *remoteMailAccountsEmployedBy;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (BOOL)shouldUseAuthentication;
@property __weak MFMailAccount *associatedAccount;
@property(readonly, nonatomic) BOOL isDynamic;
- (void)setNilValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSArray *emailAddressStrings;
@property(readonly) unsigned long long hash;
@property(copy) NSString *hostname;
@property(readonly, copy) NSString *identifier;
@property(copy) NSString *password;
@property(readonly) BOOL primaryiCloudAccount;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly) Class superclass;
@property(readonly, copy) ACAccount *systemAccount;

@end

