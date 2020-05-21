//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEProfileIngestionDelegate-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NSMutableArray, NSString;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>
{
    NSString *_clientName;
    NSString *_payloadType;
    NEConfigurationManager *_manager;
    struct AuthorizationOpaqueRef *_authorization;
    NSMutableArray *_currentConfigurations;
    NEConfiguration *_ingestedConfiguration;
}

+ (void)profileMigrationComplete;
+ (id)getServiceIDForPayload:(id)arg1;
- (void).cxx_destruct;
@property(retain) NEConfiguration *ingestedConfiguration; // @synthesize ingestedConfiguration=_ingestedConfiguration;
@property(retain) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
@property(readonly) struct AuthorizationOpaqueRef *authorization; // @synthesize authorization=_authorization;
@property(readonly) NEConfigurationManager *manager; // @synthesize manager=_manager;
@property(readonly) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (BOOL)updateManagedAppRules:(id)arg1;
- (id)findMostSpecificAppRuleForBundleID:(id)arg1 config:(id)arg2;
- (BOOL)updateAccountIdentifiers:(id)arg1;
- (BOOL)updateAppLayerVPNMappingRules:(id)arg1;
- (BOOL)isAutoCreatedRule:(id)arg1;
- (void)enableDefaultService;
- (void)unlockConfigurations;
- (BOOL)lockConfigurations;
- (BOOL)enableAlwaysOnVpn;
- (id)copyManagedConfigurationIDs;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)removeIngestedConfiguration;
- (id)getCertificatesForConfigurationWithIdentifier:(id)arg1;
- (BOOL)removeConfigurationWithIdentifier:(id)arg1;
- (BOOL)removeConfiguration:(id)arg1;
- (BOOL)enableAlwaysOnVpnInternal:(BOOL)arg1;
- (BOOL)saveIngestedConfiguration;
- (BOOL)saveConfiguration:(id)arg1;
- (BOOL)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
- (void)removeOrphanConfigurations:(id)arg1 profileUUID:(id)arg2;
- (BOOL)isInstalled:(id)arg1;
- (id)findConfigurationByConfigurationID:(id)arg1;
- (id)findConfigurationByPayloadUUID:(id)arg1;
- (id)setAsideConfigurationName:(id)arg1 unsetAside:(BOOL)arg2;
- (id)resolveConfigurationNameConflict:(id)arg1;
- (id)findConfigurationByName:(id)arg1;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (BOOL)loadConfigurationsWithRefreshOption:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNameAndAuthorization:(id)arg1 authorization:(struct AuthorizationOpaqueRef *)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;

@end

