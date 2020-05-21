//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGSmartOperation.h>

@class PASmartColorAutoSettings;

@interface DGSmartColorOperation : DGSmartOperation
{
    double _inputColor;
    struct {
        double sat;
        double contrast;
        double cast;
    } _smartSettings;
    PASmartColorAutoSettings *_stats;
    double _offsetSaturation;
    double _offsetContrast;
    double _offsetCast;
}

+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;
+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
- (void).cxx_destruct;
@property(nonatomic) double offsetCast; // @synthesize offsetCast=_offsetCast;
@property(nonatomic) double offsetContrast; // @synthesize offsetContrast=_offsetContrast;
@property(nonatomic) double offsetSaturation; // @synthesize offsetSaturation=_offsetSaturation;
@property(nonatomic) double inputColor; // @synthesize inputColor=_inputColor;
- (void)resetAllAutoSettingsToPending;
- (void)_applyAutoSettings:(id)arg1;
- (double)getAutoValueForInputKey:(id)arg1;
- (id)autoCalculatedSlaveInputKeysForMasterInputKey:(id)arg1;
- (void)restoreAutoSettings:(id)arg1 currentAutoIdentifier:(id)arg2;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)settingsDictionary;
- (void)resetOffsets;
@property(nonatomic) double inputCast;
@property(nonatomic) double inputContrast;
@property(nonatomic) double inputSaturation;
- (void)_updateSettings;
- (unsigned long long)hash;
- (id)initWithOperation:(id)arg1;
- (BOOL)isMigratable;

@end

