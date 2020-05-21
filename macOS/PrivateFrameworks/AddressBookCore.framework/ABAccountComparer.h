//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ABAccountComparer : NSObject
{
    NSDictionary *_accountConfigurationsByIdentifier;
}

+ (id)iCloudDomains;
+ (id)comparisonKeys;
+ (id)os_log;
- (void).cxx_destruct;
@property(retain) NSDictionary *accountConfigurationsByIdentifier; // @synthesize accountConfigurationsByIdentifier=_accountConfigurationsByIdentifier;
- (BOOL)isUseSSLConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (unsigned long long)effectiveServerPortForConfiguration:(id)arg1;
- (BOOL)isServerPortConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (BOOL)isHost:(id)arg1 equivalentToHost:(id)arg2;
- (id)usernameByStrippingDomain:(id)arg1;
- (BOOL)isiCloudUsername:(id)arg1 equivalentToUserName:(id)arg2;
- (BOOL)isUsername:(id)arg1 equivalentToUsername:(id)arg2;
- (BOOL)isExistingValue:(id)arg1 equivalentToProposedValue:(id)arg2 forConfigKey:(id)arg3;
- (BOOL)isExistingConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (id)existingAccountIdentifierForConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)initWithAccountConfigurationsByIdentifier:(id)arg1;

@end

