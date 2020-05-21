//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXHADeviceProtocol-Protocol.h>

@class AXHearingAidMode, NSArray, NSDate, NSMutableArray, NSString;
@protocol AXHARemoteUpdateProtocol;

@interface AXRemoteHearingAidDevice : NSObject <AXHADeviceProtocol>
{
    BOOL _delayWritePending;
    BOOL _keepInSync;
    BOOL _leftTreble;
    BOOL _rightTreble;
    BOOL _leftBass;
    BOOL _rightBass;
    BOOL _isBluetoothPaired;
    BOOL _isPaired;
    BOOL _isConnecting;
    BOOL _leftConnected;
    BOOL _rightConnected;
    BOOL _supportsBinauralStreaming;
    BOOL _supportsCombinedPresets;
    BOOL _supportsCombinedVolumes;
    short _leftMicrophoneVolumeSteps;
    short _rightMicrophoneVolumeSteps;
    short _leftStreamVolumeSteps;
    short _rightStreamVolumeSteps;
    short _leftSensitivitySteps;
    short _rightSensitivitySteps;
    short _leftMixedVolumeSteps;
    short _rightMixedVolumeSteps;
    int availableEars;
    unsigned long long _deviceType;
    double _rightMicrophoneVolume;
    double _leftMicrophoneVolume;
    double _rightStreamVolume;
    double _leftStreamVolume;
    double _leftSensitivity;
    double _rightSensitivity;
    double _leftMixedVolume;
    double _rightMixedVolume;
    id <AXHARemoteUpdateProtocol> _updateDelegate;
    NSString *_name;
    NSMutableArray *_manufacturer;
    NSMutableArray *_model;
    NSString *_leftFirmwareVersion;
    NSString *_rightFirmwareVersion;
    NSString *_leftHardwareVersion;
    NSString *_rightHardwareVersion;
    NSString *_rightUUID;
    NSString *_leftUUID;
    NSString *_leftPeripheralUUID;
    NSString *_rightPeripheralUUID;
    double _rightBatteryLevel;
    double _leftBatteryLevel;
    NSDate *_leftBatteryLowDate;
    NSDate *_rightBatteryLowDate;
    NSArray *_rightPrograms;
    NSArray *_leftPrograms;
    AXHearingAidMode *_leftSelectedProgram;
    AXHearingAidMode *_rightSelectedProgram;
    AXHearingAidMode *_leftSelectedStreamingProgram;
    AXHearingAidMode *_rightSelectedStreamingProgram;
    NSString *_deviceUUID;
    unsigned long long _requiredProperties;
    unsigned long long _loadedProperties;
    unsigned long long _pendingPropertyWrites;
    unsigned long long _leftAvailableProperties;
    unsigned long long _rightAvailableProperties;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rightAvailableProperties; // @synthesize rightAvailableProperties=_rightAvailableProperties;
@property(nonatomic) unsigned long long leftAvailableProperties; // @synthesize leftAvailableProperties=_leftAvailableProperties;
@property(nonatomic) unsigned long long pendingPropertyWrites; // @synthesize pendingPropertyWrites=_pendingPropertyWrites;
@property(nonatomic) unsigned long long loadedProperties; // @synthesize loadedProperties=_loadedProperties;
@property(nonatomic) unsigned long long requiredProperties; // @synthesize requiredProperties=_requiredProperties;
@property(retain, nonatomic) NSString *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(retain, nonatomic) AXHearingAidMode *rightSelectedStreamingProgram; // @synthesize rightSelectedStreamingProgram=_rightSelectedStreamingProgram;
@property(retain, nonatomic) AXHearingAidMode *leftSelectedStreamingProgram; // @synthesize leftSelectedStreamingProgram=_leftSelectedStreamingProgram;
@property(retain, nonatomic) AXHearingAidMode *rightSelectedProgram; // @synthesize rightSelectedProgram=_rightSelectedProgram;
@property(retain, nonatomic) AXHearingAidMode *leftSelectedProgram; // @synthesize leftSelectedProgram=_leftSelectedProgram;
@property(copy, nonatomic) NSArray *leftPrograms; // @synthesize leftPrograms=_leftPrograms;
@property(copy, nonatomic) NSArray *rightPrograms; // @synthesize rightPrograms=_rightPrograms;
@property(nonatomic) BOOL supportsCombinedVolumes; // @synthesize supportsCombinedVolumes=_supportsCombinedVolumes;
@property(nonatomic) BOOL supportsCombinedPresets; // @synthesize supportsCombinedPresets=_supportsCombinedPresets;
@property(nonatomic) BOOL supportsBinauralStreaming; // @synthesize supportsBinauralStreaming=_supportsBinauralStreaming;
@property(nonatomic) short rightMixedVolumeSteps; // @synthesize rightMixedVolumeSteps=_rightMixedVolumeSteps;
@property(nonatomic) short leftMixedVolumeSteps; // @synthesize leftMixedVolumeSteps=_leftMixedVolumeSteps;
@property(nonatomic) short rightSensitivitySteps; // @synthesize rightSensitivitySteps=_rightSensitivitySteps;
@property(nonatomic) short leftSensitivitySteps; // @synthesize leftSensitivitySteps=_leftSensitivitySteps;
@property(nonatomic) short rightStreamVolumeSteps; // @synthesize rightStreamVolumeSteps=_rightStreamVolumeSteps;
@property(nonatomic) short leftStreamVolumeSteps; // @synthesize leftStreamVolumeSteps=_leftStreamVolumeSteps;
@property(nonatomic) short rightMicrophoneVolumeSteps; // @synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps;
@property(nonatomic) short leftMicrophoneVolumeSteps; // @synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps;
@property(retain, nonatomic) NSDate *rightBatteryLowDate; // @synthesize rightBatteryLowDate=_rightBatteryLowDate;
@property(retain, nonatomic) NSDate *leftBatteryLowDate; // @synthesize leftBatteryLowDate=_leftBatteryLowDate;
@property(nonatomic) double leftBatteryLevel; // @synthesize leftBatteryLevel=_leftBatteryLevel;
@property(nonatomic) double rightBatteryLevel; // @synthesize rightBatteryLevel=_rightBatteryLevel;
@property(retain, nonatomic) NSString *rightPeripheralUUID; // @synthesize rightPeripheralUUID=_rightPeripheralUUID;
@property(retain, nonatomic) NSString *leftPeripheralUUID; // @synthesize leftPeripheralUUID=_leftPeripheralUUID;
@property(retain, nonatomic) NSString *leftUUID; // @synthesize leftUUID=_leftUUID;
@property(retain, nonatomic) NSString *rightUUID; // @synthesize rightUUID=_rightUUID;
@property(retain, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion=_rightHardwareVersion;
@property(retain, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion=_leftHardwareVersion;
@property(retain, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion=_rightFirmwareVersion;
@property(retain, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion=_leftFirmwareVersion;
@property(retain, nonatomic) NSMutableArray *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL rightConnected; // @synthesize rightConnected=_rightConnected;
@property(nonatomic) BOOL leftConnected; // @synthesize leftConnected=_leftConnected;
@property(nonatomic) BOOL isConnecting; // @synthesize isConnecting=_isConnecting;
@property(nonatomic) BOOL isPaired; // @synthesize isPaired=_isPaired;
@property(nonatomic) BOOL isBluetoothPaired; // @synthesize isBluetoothPaired=_isBluetoothPaired;
@property(nonatomic) __weak id <AXHARemoteUpdateProtocol> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) double rightMixedVolume; // @synthesize rightMixedVolume=_rightMixedVolume;
@property(nonatomic) double leftMixedVolume; // @synthesize leftMixedVolume=_leftMixedVolume;
@property(nonatomic) BOOL rightBass; // @synthesize rightBass=_rightBass;
@property(nonatomic) BOOL leftBass; // @synthesize leftBass=_leftBass;
@property(nonatomic) BOOL rightTreble; // @synthesize rightTreble=_rightTreble;
@property(nonatomic) BOOL leftTreble; // @synthesize leftTreble=_leftTreble;
@property(nonatomic) int availableEars; // @synthesize availableEars;
@property(nonatomic) double rightSensitivity; // @synthesize rightSensitivity=_rightSensitivity;
@property(nonatomic) double leftSensitivity; // @synthesize leftSensitivity=_leftSensitivity;
@property(nonatomic) double leftStreamVolume; // @synthesize leftStreamVolume=_leftStreamVolume;
@property(nonatomic) double rightStreamVolume; // @synthesize rightStreamVolume=_rightStreamVolume;
@property(nonatomic) double leftMicrophoneVolume; // @synthesize leftMicrophoneVolume=_leftMicrophoneVolume;
@property(nonatomic) double rightMicrophoneVolume; // @synthesize rightMicrophoneVolume=_rightMicrophoneVolume;
@property(nonatomic) BOOL keepInSync; // @synthesize keepInSync=_keepInSync;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, copy) NSString *description;
- (double)combinedVolumeForProperty:(unsigned long long)arg1;
- (id)valueForProperty:(unsigned long long)arg1;
- (id)_valueForProperty:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)selectProgram:(id)arg1 forEar:(int)arg2;
- (void)_writeAllProgramSelectionsToPeripheral;
- (void)_updateSelectedProgramsProperties;
- (id)combinedPrograms;
- (id)programs;
- (BOOL)showCombinedPrograms;
- (BOOL)programsListsAreEqual;
- (BOOL)shouldOnlyShowIndividualVolumesForProperty:(unsigned long long)arg1;
- (BOOL)shouldDisplayCombinedVolume;
- (BOOL)supportsCombinedVolumesForProperty:(unsigned long long)arg1;
- (id)programAtIndex:(unsigned char)arg1 forEar:(int)arg2;
- (void)writeVolumesForProperty:(unsigned long long)arg1;
- (void)_delayWriteProperties;
- (BOOL)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;
- (void)loadRequiredProperties;
- (BOOL)checkDidLoadProperties:(unsigned long long)arg1;
- (BOOL)didLoadRequiredProperties;
- (BOOL)didLoadRequiredPeerProperties;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadProperty:(unsigned long long)arg1;
- (BOOL)containsPeripheralWithUUID:(id)arg1;
- (BOOL)isRightConnected;
- (BOOL)isLeftConnected;
- (BOOL)hasConnection;
- (BOOL)isConnected;
- (BOOL)rightAvailable;
- (BOOL)leftAvailable;
- (void)disconnectAndUnpair:(BOOL)arg1;
- (void)connect;
- (void)dealloc;
- (id)initWithPersistentRepresentation:(id)arg1;
- (id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

