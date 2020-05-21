//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/AVCAudioPowerSpectrumMeterDelegate-Protocol.h>

@class AVCAudioPowerSpectrumMeter, NSString;
@protocol OS_dispatch_queue, TUAudioFrequencyControllerDelegate;

@interface TUAudioFrequencyController : NSObject <AVCAudioPowerSpectrumMeterDelegate>
{
    id <TUAudioFrequencyControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    AVCAudioPowerSpectrumMeter *_powerSpectrumMeter;
}

+ (float)normalizedPowerLevelForPowerSpectrum:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVCAudioPowerSpectrumMeter *powerSpectrumMeter; // @synthesize powerSpectrumMeter=_powerSpectrumMeter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <TUAudioFrequencyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)meterServerDidDisconnect:(id)arg1;
- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)unregisterParticipantPowerSpectrum:(long long)arg1;
- (void)registerParticipantPowerSpectrum:(long long)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

