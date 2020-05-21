//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioDSPManager/NSSecureCoding-Protocol.h>
#import <AudioDSPManager/dspd_DSPDelegate-Protocol.h>

@class ADMNotificationManager, ConfigurationChangeRequestParser, ConfigurationChangeRequestTransaction, DSPModuleFactory, DatabaseController, GraphManager, NSString, SystemStateManager, VolumeManager;

__attribute__((visibility("hidden")))
@interface AudioDSPManager : NSObject <dspd_DSPDelegate, NSSecureCoding>
{
    set_6185be97 _hwStreamsCurrentlyCaptured;
    GraphManager *_graphManager;
    SystemStateManager *_systemStateManager;
    VolumeManager *_volumeManager;
    DatabaseController *_databaseController;
    ADMNotificationManager *_notificationManager;
    ConfigurationChangeRequestParser *_configChangeRequestParser;
    ConfigurationChangeRequestTransaction *_pendingConfigRequestTransaction;
    DSPModuleFactory *_dspModuleFactory;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) DSPModuleFactory *dspModuleFactory; // @synthesize dspModuleFactory=_dspModuleFactory;
@property(readonly, nonatomic) ConfigurationChangeRequestTransaction *pendingConfigRequestTransaction; // @synthesize pendingConfigRequestTransaction=_pendingConfigRequestTransaction;
@property(readonly, nonatomic) ConfigurationChangeRequestParser *configChangeRequestParser; // @synthesize configChangeRequestParser=_configChangeRequestParser;
@property(readonly, nonatomic) ADMNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) DatabaseController *databaseController; // @synthesize databaseController=_databaseController;
@property(readonly, nonatomic) VolumeManager *volumeManager; // @synthesize volumeManager=_volumeManager;
@property(readonly, nonatomic) SystemStateManager *systemStateManager; // @synthesize systemStateManager=_systemStateManager;
@property(readonly, nonatomic) GraphManager *graphManager; // @synthesize graphManager=_graphManager;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct error_code)setGraphVolumeDelegate:(id)arg1;
- (struct error_code)setVolumeNotificationDelegate:(id)arg1;
- (struct error_code)setHardwareVolumeDelegate:(id)arg1;
- (expected_ea5d568f)stereoPanChannels:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setStereoPan:(unsigned long long)arg1 element:(unsigned int)arg2 stereoPan:(float)arg3;
- (expected_60ac6007)stereoPan:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_1e8b1ea0)stereoPanControlSettable:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setMute:(unsigned long long)arg1 element:(unsigned int)arg2 isMute:(_Bool)arg3;
- (expected_1e8b1ea0)mute:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_1e8b1ea0)muteControlSettable:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_60ac6007)convertDecibelsToScalar:(unsigned long long)arg1 element:(unsigned int)arg2 decibelVolume:(float)arg3;
- (expected_60ac6007)convertScalarToDecibels:(unsigned long long)arg1 element:(unsigned int)arg2 scalarVolume:(float)arg3;
- (expected_5f904053)decibelVolumeRange:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setDecibelVolume:(unsigned long long)arg1 element:(unsigned int)arg2 decibelVolume:(float)arg3;
- (expected_60ac6007)decibelVolume:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setScalarVolume:(unsigned long long)arg1 element:(unsigned int)arg2 scalarVolume:(float)arg3;
- (expected_60ac6007)scalarVolume:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_1e8b1ea0)levelControlSettable:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)stereoPanControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)muteControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)levelControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)fadeVolumeLevel:(float)arg1 ioControllerID:(unsigned long long)arg2 direction:(unsigned char)arg3 portID:(optional_5c48748e)arg4 duration:(duration_34584d68)arg5 completionHandler:(function_f5b89e9d)arg6;
@property(readonly, nonatomic) vector_a93e9522 muteRecords;
- (vector_e9e5d60e)setMuteRecords:(const vector_a93e9522 *)arg1;
@property(readonly, nonatomic) vector_df89e1f1 scalarVolumeRecords;
- (vector_e9e5d60e)setScalarVolumeRecords:(const vector_df89e1f1 *)arg1;
- (struct error_code)setVirtualMasterStereoPan:(unsigned long long)arg1 stereoPan:(float)arg2;
- (expected_60ac6007)virtualMasterStereoPan:(unsigned long long)arg1;
- (struct error_code)setVirtualMasterVolume:(unsigned long long)arg1 scalarVolume:(float)arg2;
- (expected_60ac6007)virtualMasterVolume:(unsigned long long)arg1;
- (expected_336b2855)volumeCapabilities:(unsigned long long)arg1;
- (expected_27549f77)supportedPublicStreamFormats:(id)arg1;
- (optional_95a1d2b1)activeMicrophoneConfiguration:(unsigned long long)arg1 ioControllerID:(unsigned long long)arg2;
- (optional_4a6ac3f9)simulateMicrophoneConfigurationAvailability:(unsigned long long)arg1 configuration:(id)arg2;
- (expected_af0f637c)simulateConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_af0f637c)simulateConfigurationChange:(id)arg1;
- (expected_025c1a52)configurationChangeComplete:(int)arg1 dspMutation:(function_71b6729b)arg2;
- (expected_025c1a52)configurationChangeComplete:(int)arg1;
- (expected_0910f26e)adaptToConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_0910f26e)adaptToConfigurationChange:(id)arg1;
- (expected_2b9a0a05)negotiateConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_2b9a0a05)negotiateConfigurationChange:(id)arg1;
- (id)supportedPublicStreamFormatRequest;
- (id)deactivationChangeRequestWithSession:(unsigned int)arg1;
- (id)activationChangeRequestWithSession:(unsigned int)arg1;
- (id)initWithProductID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

