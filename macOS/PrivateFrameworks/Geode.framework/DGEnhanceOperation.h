//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

#import <Geode/DGAutoCalculable-Protocol.h>

@class NSNumber, NSString;

@interface DGEnhanceOperation : DGOperation <DGAutoCalculable>
{
    int _contrastLegacyVersion;
    int _saturationLegacyVersion;
    int _vibranceLegacyVersion;
    int _definitionLegacyVersion;
    NSNumber *_inputContrast;
    NSNumber *_inputDefinition;
    NSNumber *_inputSaturation;
    NSNumber *_inputVibrancy;
    NSNumber *_inputWhiteUOffset;
    NSNumber *_inputWhiteVOffset;
    NSNumber *_inputGrayUOffset;
    NSNumber *_inputGrayVOffset;
    NSNumber *_inputGrayBrightness;
    NSNumber *_inputBlackUOffset;
    NSNumber *_inputBlackVOffset;
}

+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;
+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *inputBlackVOffset; // @synthesize inputBlackVOffset=_inputBlackVOffset;
@property(copy, nonatomic) NSNumber *inputBlackUOffset; // @synthesize inputBlackUOffset=_inputBlackUOffset;
@property(copy, nonatomic) NSNumber *inputGrayBrightness; // @synthesize inputGrayBrightness=_inputGrayBrightness;
@property(copy, nonatomic) NSNumber *inputGrayVOffset; // @synthesize inputGrayVOffset=_inputGrayVOffset;
@property(copy, nonatomic) NSNumber *inputGrayUOffset; // @synthesize inputGrayUOffset=_inputGrayUOffset;
@property(copy, nonatomic) NSNumber *inputWhiteVOffset; // @synthesize inputWhiteVOffset=_inputWhiteVOffset;
@property(copy, nonatomic) NSNumber *inputWhiteUOffset; // @synthesize inputWhiteUOffset=_inputWhiteUOffset;
@property(copy, nonatomic) NSNumber *inputVibrancy; // @synthesize inputVibrancy=_inputVibrancy;
@property(copy, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation=_inputSaturation;
@property(copy, nonatomic) NSNumber *inputDefinition; // @synthesize inputDefinition=_inputDefinition;
@property(copy, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast=_inputContrast;
@property(nonatomic) int inputDefinitionLegacyVersion; // @synthesize inputDefinitionLegacyVersion=_definitionLegacyVersion;
@property(nonatomic) int inputVibranceLegacyVersion; // @synthesize inputVibranceLegacyVersion=_vibranceLegacyVersion;
@property(nonatomic) int inputSaturationLegacyVersion; // @synthesize inputSaturationLegacyVersion=_saturationLegacyVersion;
@property(nonatomic) int inputContrastLegacyVersion; // @synthesize inputContrastLegacyVersion=_contrastLegacyVersion;
- (void)_applyAutoSettings:(id)arg1;
- (id)settingsDictionary;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (double)_computeRadiusForExtent:(struct CGRect)arg1 scalingFactor:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

