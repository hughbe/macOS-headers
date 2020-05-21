//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCVideoStreamRateAdaptation.h>

@class AVCStatisticsCollector, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation
{
    AVCStatisticsCollector *_statisticsCollector;
    NSObject<OS_dispatch_source> *_rateControlFeedbackSource;
    BOOL _didReceiveVideo;
    BOOL _useLowPrecisionEchoTimeStamp;
    unsigned int _previousRTPTimestamp;
    unsigned int _totalPacketsReceived;
    unsigned int _lastTimestamp;
    double _lastTimestampReceiveTime;
}

@property(nonatomic) BOOL didReceiveVideo; // @synthesize didReceiveVideo=_didReceiveVideo;
- (double)owrd;
- (void)updateRateControlInfoWithStatisticsMessage:(CDStruct_b21f1e06)arg1;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3 size:(unsigned int)arg4 endOfFrame:(BOOL)arg5;
- (void)sendRateControlFeedback;
- (void)stopFeedbackSource;
- (void)startFeedbackSource;
- (void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)dealloc;
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 receiverStats:(id)arg3 dumpID:(unsigned int)arg4 reportingParentID:(int)arg5 statisticsCollector:(id)arg6 lowTimestampPrecision:(BOOL)arg7;

@end

