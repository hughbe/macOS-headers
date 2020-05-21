//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PAPlatform : NSObject
{
    struct __CFRunLoopSource *_powerManagementObserver;
    int _discreteGraphicsRetainCount;
    NSObject<OS_dispatch_queue> *_thermalPressureQueue;
    int _thermalPressureNotifyToken;
    BOOL _hasHeadlessGPU;
    BOOL _hasMuxedGraphics;
    BOOL _isPluggedIn;
    BOOL _hasRetainedDiscreteGPU;
    int _thermalPressureLevel;
    NSString *_model;
    double _baseClockSpeedInGHz;
    long long _physicalCoreCount;
    double _systemRAMInGigabytes;
    unsigned long long _masterCacheSize;
    unsigned long long _previewCacheSize;
    unsigned long long _thumbnailCacheSize;
    unsigned long long _temporaryCacheSize;
}

+ (id)platform;
- (void).cxx_destruct;
@property BOOL hasRetainedDiscreteGPU; // @synthesize hasRetainedDiscreteGPU=_hasRetainedDiscreteGPU;
@property(readonly) unsigned long long temporaryCacheSize; // @synthesize temporaryCacheSize=_temporaryCacheSize;
@property(readonly) unsigned long long thumbnailCacheSize; // @synthesize thumbnailCacheSize=_thumbnailCacheSize;
@property(readonly) unsigned long long previewCacheSize; // @synthesize previewCacheSize=_previewCacheSize;
@property(readonly) unsigned long long masterCacheSize; // @synthesize masterCacheSize=_masterCacheSize;
@property(readonly) double systemRAMInGigabytes; // @synthesize systemRAMInGigabytes=_systemRAMInGigabytes;
@property(readonly) long long physicalCoreCount; // @synthesize physicalCoreCount=_physicalCoreCount;
@property(readonly) double baseClockSpeedInGHz; // @synthesize baseClockSpeedInGHz=_baseClockSpeedInGHz;
@property int thermalPressureLevel; // @synthesize thermalPressureLevel=_thermalPressureLevel;
@property BOOL isPluggedIn; // @synthesize isPluggedIn=_isPluggedIn;
@property(readonly) BOOL hasMuxedGraphics; // @synthesize hasMuxedGraphics=_hasMuxedGraphics;
@property(readonly) BOOL hasHeadlessGPU; // @synthesize hasHeadlessGPU=_hasHeadlessGPU;
@property(readonly) NSString *model; // @synthesize model=_model;
- (void)_updateMUXLockDown;
- (void)_updateMUXLockDownIfNeeded;
- (BOOL)_isPluggedIn;
- (void)_powerManagementUpdated;
- (void)_releaseDiscreteGPU;
- (void)releaseDiscreteGPU;
- (void)_retainDiscreteGPU;
- (void)retainDiscreteGPU;
@property(readonly) BOOL hasDiscreteGPU;
- (id)description;
- (void)_updateThermalPressureLevel;
- (void)_initThermalPressureMonitoring;
- (void)_initPowerMonitoring;
- (void)_initHardwareProperties;
- (void)_initIOProperties;
- (id)init;

@end

