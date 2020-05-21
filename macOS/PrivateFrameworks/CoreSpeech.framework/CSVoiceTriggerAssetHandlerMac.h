//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>

#import <CoreSpeech/CSFirstUnlockMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAssetDownloadMonitorDelegate-Protocol.h>

@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    CSAsset *_cachedAsset;
}

- (void).cxx_destruct;
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2;
- (void)_checkNewAssetAvailablity;
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;
- (void)getVoiceTriggerAsset:(CDUnknownBlockType)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

