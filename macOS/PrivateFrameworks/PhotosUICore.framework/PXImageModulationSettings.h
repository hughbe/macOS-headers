//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXImageModulationSettings : PXSettings
{
    BOOL _enabled;
    BOOL _forceCurrentScreenSupportsHDR;
    long long _filterType;
    long long _HDRConsideration;
    double _HDRModulationIntensity;
    double _SDRModulationIntensity;
    double _videoComplementModulationIntensity;
    long long _EDRHeadroomRequestScheme;
    long long _EDRHeadroomUsageScheme;
    double _manualEDRHeadroomRequestStops;
    double _EDRHeadroomRequestHDRThreshold;
    double _EDRHeadroomRequestSustainDuration;
    double _lowEDRRequestedHeadroomStops;
    double _highEDRRequestedHeadroomStops;
    double _deviceMaximumEDRHeadroomStops;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) BOOL forceCurrentScreenSupportsHDR; // @synthesize forceCurrentScreenSupportsHDR=_forceCurrentScreenSupportsHDR;
@property(nonatomic) double deviceMaximumEDRHeadroomStops; // @synthesize deviceMaximumEDRHeadroomStops=_deviceMaximumEDRHeadroomStops;
@property(nonatomic) double highEDRRequestedHeadroomStops; // @synthesize highEDRRequestedHeadroomStops=_highEDRRequestedHeadroomStops;
@property(nonatomic) double lowEDRRequestedHeadroomStops; // @synthesize lowEDRRequestedHeadroomStops=_lowEDRRequestedHeadroomStops;
@property(nonatomic) double EDRHeadroomRequestSustainDuration; // @synthesize EDRHeadroomRequestSustainDuration=_EDRHeadroomRequestSustainDuration;
@property(nonatomic) double EDRHeadroomRequestHDRThreshold; // @synthesize EDRHeadroomRequestHDRThreshold=_EDRHeadroomRequestHDRThreshold;
@property(nonatomic) double manualEDRHeadroomRequestStops; // @synthesize manualEDRHeadroomRequestStops=_manualEDRHeadroomRequestStops;
@property(nonatomic) long long EDRHeadroomUsageScheme; // @synthesize EDRHeadroomUsageScheme=_EDRHeadroomUsageScheme;
@property(nonatomic) long long EDRHeadroomRequestScheme; // @synthesize EDRHeadroomRequestScheme=_EDRHeadroomRequestScheme;
@property(nonatomic) double videoComplementModulationIntensity; // @synthesize videoComplementModulationIntensity=_videoComplementModulationIntensity;
@property(nonatomic) double SDRModulationIntensity; // @synthesize SDRModulationIntensity=_SDRModulationIntensity;
@property(nonatomic) double HDRModulationIntensity; // @synthesize HDRModulationIntensity=_HDRModulationIntensity;
@property(nonatomic) long long HDRConsideration; // @synthesize HDRConsideration=_HDRConsideration;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)setDefaultValues;
- (id)parentSettings;

@end

