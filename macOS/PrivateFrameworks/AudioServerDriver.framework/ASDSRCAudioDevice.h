//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioServerDriver/ASDAudioDevice.h>

#import <AudioServerDriver/ASDDeviceConfigurationChangeDelegate-Protocol.h>
#import <AudioServerDriver/ASDPropertyChangedDelegate-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate>
{
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    struct {
        unsigned char valid;
        double sampleTime;
        unsigned long long hostTime;
        unsigned long long seed;
    } _lastTimestamp;
    ASDAudioDevice *_underlyingDevice;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASDAudioDevice *underlyingDevice; // @synthesize underlyingDevice=_underlyingDevice;
- (void)changedProperty:(const struct AudioObjectPropertyAddress *)arg1 forObject:(id)arg2;
- (BOOL)requestConfigurationChangeForDevice:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)willDoWriteMixBlock;
- (CDUnknownBlockType)willDoReadInputBlock;
- (CDUnknownBlockType)getZeroTimestampBlock;
- (int)performStopIO;
- (unsigned int)outputLatency;
- (unsigned int)inputLatency;
- (BOOL)clockIsStable;
- (unsigned int)clockAlgorithm;
- (unsigned int)clockDomain;
- (unsigned int)transportType;
- (unsigned int)outputSafetyOffset;
- (unsigned int)inputSafetyOffset;
- (unsigned int)timestampPeriod;
- (BOOL)isHidden;
- (BOOL)canBeDefaultSystemDevice;
- (BOOL)canBeDefaultDevice;
- (id)samplingRates;
- (void)setSamplingRates:(id)arg1;
- (BOOL)changeSamplingRate:(double)arg1;
- (double)samplingRate;
- (void)setSamplingRate:(double)arg1;
- (id)modelUID;
- (id)modelName;
- (id)manufacturerName;
- (void)setDeviceName:(id)arg1;
- (id)deviceName;
- (int)stopIOForClient:(unsigned int)arg1;
- (int)startIOForClient:(unsigned int)arg1;
- (id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 plugin:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

