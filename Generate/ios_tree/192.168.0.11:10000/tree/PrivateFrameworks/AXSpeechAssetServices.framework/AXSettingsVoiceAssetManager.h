/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
 */

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {
    NSPointerArray * _delegates;
    struct __SCNetworkReachability { } * _reachability;
    AVSpeechSynthesizer * _samplePlayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_allAssetsForVoiceId:(id)arg1 forDeletion:(bool)arg2;
- (id)_allInstalledAssetsForVoiceId:(id)arg1;
- (id)_assetForVoiceId:(id)arg1 forDeletion:(bool)arg2;
- (id)_assetTypeForVoiceId:(id)arg1;
- (id)_assetUpdaterClient;
- (id)_cachedAssetForVoiceId:(id)arg1;
- (id)_currentDelegates;
- (void)_handleAssetProgress:(id)arg1 voiceId:(id)arg2 diskSize:(long long)arg3 asset:(id)arg4;
- (id)_mobileAssetDownloadOptions;
- (void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (void)_startDownloadingAlternateVoice:(id)arg1;
- (void)_updateAllowedToDownload;
- (bool)_voiceIdIsVocalizerVoice:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)allInstalledAssetsForVoiceId:(id)arg1;
- (bool)allowedToDownloadVoiceAssets;
- (id)assetForVoiceId:(id)arg1;
- (id)assetsForTesting;
- (void)cleanUpExtraInstalledAssetsIfNecessary:(id)arg1;
- (void)clientUpdateAvailableSpeechAssets;
- (void)dealloc;
- (void)deleteDownloadAlternateVoice:(id)arg1;
- (long long)diskSizeForAsset:(id)arg1;
- (bool)inUnitTestMode;
- (id)init;
- (id)mobileAssetDownloadQueue;
- (id)mobileAssetWorkQueue;
- (void)playSample:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDelegate:(id)arg1;
- (void)removeSiriVoiceUsage:(id)arg1;
- (void)replaceTestAsset:(id)arg1 withAsset:(id)arg2;
- (void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (id)selectedIdsForTesting;
- (void)setAssetsForTesting:(id)arg1;
- (void)setSelectedIdsForTesting:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)startDownloadingAlternateVoice:(id)arg1;
- (void)stopDownloadingAlternateVoice:(id)arg1;
- (void)updateAvailableSpeechAssetsSynchronously;

@end
