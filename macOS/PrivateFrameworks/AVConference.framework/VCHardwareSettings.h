//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCHardwareSettings : NSObject
{
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
}

+ (long long)deviceClass;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg1;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg1;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)tilesPerVideoFrame:(int)arg1;
- (BOOL)isHEVCDecodeSupported:(int)arg1;
- (BOOL)isHEVCEncodeSupported:(int)arg1;
@property(readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property(readonly, nonatomic) BOOL supportHEVC;
- (id)featureListStringForHEVC:(int)arg1;
- (id)featureListStringForH264:(int)arg1;
- (void)dealloc;
- (id)init;

@end

