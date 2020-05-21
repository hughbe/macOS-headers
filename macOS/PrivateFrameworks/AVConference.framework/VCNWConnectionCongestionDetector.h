//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface VCNWConnectionCongestionDetector : NSObject
{
    AVCStatisticsCollector *_statisticsCollector;
    CDStruct_b21f1e06 _previousStatistics;
    unsigned int _averageThroughputBps;
    unsigned int _averagePacketDelayMs;
    unsigned int _maxAveragePacketDelayMs;
    unsigned int _lastTimestampWithPacketDrop;
    unsigned int _packetDropCount;
    unsigned int _packetDropCountPerFrame;
    BOOL _didSendCongestionEvent;
    void *_logNWDump;
}

@property(readonly) unsigned int packetDropCount; // @synthesize packetDropCount=_packetDropCount;
@property(readonly) unsigned int averageThroughputBps; // @synthesize averageThroughputBps=_averageThroughputBps;
@property unsigned int maxAveragePacketDelayMs; // @synthesize maxAveragePacketDelayMs=_maxAveragePacketDelayMs;
@property(readonly) unsigned int averagePacketDelayMs; // @synthesize averagePacketDelayMs=_averagePacketDelayMs;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)enableNWLogDump:(void *)arg1;
- (void)sendCongestionEventWithTimestamp:(unsigned int)arg1;
- (BOOL)processNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;
- (BOOL)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;
- (void)dealloc;

@end

