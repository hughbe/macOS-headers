/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHTemplateAssetRegistry : NSObject <ACHTemplateSourceDelegate> {
    NSObject<ACHTemplateAssetRegistryDelegate> * _delegate;
    ACHRemoteTemplateAvailabilityKeyProvider * _remoteTemplateAvailabilityKeyProvider;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _templateSourcesByIdentifier;
}

@property (nonatomic) NSObject<ACHTemplateAssetRegistryDelegate> *delegate;
@property (nonatomic, retain) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) NSMutableDictionary *templateSourcesByIdentifier;

- (void).cxx_destruct;
- (void)_setBundleURLsForAchievement:(id)arg1;
- (id)delegate;
- (void)deregisterTemplateSource:(id)arg1;
- (id)initWithRemoteTemplateAvailabilityKeyProvider:(id)arg1;
- (void)populateResourcePropertiesForAchievement:(id)arg1;
- (void)registerTemplateSource:(id)arg1;
- (id)remoteTemplateAvailabilityKeyProvider;
- (id)serialQueue;
- (void)setDelegate:(id)arg1;
- (void)setRemoteTemplateAvailabilityKeyProvider:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setTemplateSourcesByIdentifier:(id)arg1;
- (void)templateSourceDidUpdateAssets:(id)arg1;
- (id)templateSourcesByIdentifier;

@end
