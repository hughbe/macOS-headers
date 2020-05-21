//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationHost : NSObject
{
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
}

+ (id)_loadProfilesFromURL:(id)arg1;
+ (id)_loadProfilesFromDict:(id)arg1;
+ (id)defaultManager;
- (void).cxx_destruct;
- (id)_stringWithReason:(long long)arg1;
- (void)_checkNewVersion;
- (BOOL)_isConfigFileAvailable;
- (void)_extensionsLoaded:(id)arg1;
- (BOOL)_saveConfigToFile:(id)arg1 error:(id *)arg2;
- (BOOL)_initDataVaultIfNeededWithError:(id *)arg1;
- (id)_checkAssociatedDomainForProfiles:(id)arg1;
- (id)_checkExtensionsExistenceForProfiles:(id)arg1;
- (void)_configurationLoadedWithReason:(long long)arg1;
- (void)_reloadConfigWithReason:(long long)arg1;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (void)_loadConfigForFirstTime;
@property(readonly, nonatomic) long long configVersion;
- (long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;
- (id)realms;
- (id)profilesWithExtensionBundleIdentifier:(id)arg1;
- (id)configurationForClientWithError:(id *)arg1;
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;
- (BOOL)saveConfigurationData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

