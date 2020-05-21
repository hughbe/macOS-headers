//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControllerProtocol-Protocol.h>

@class AVCStatisticsCollector, NSString;
@protocol VCRedundancyControlAlgorithm;

__attribute__((visibility("hidden")))
@interface VCRedundancyControllerAudio : NSObject <VCRedundancyControllerProtocol>
{
    id _redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id <VCRedundancyControlAlgorithm> _algorithm;
    unsigned int _currentRedundancyPercentage;
    double _currentRedundancyInterval;
}

- (void)reportRedundancyPercentage:(unsigned int)arg1 redundancyInterval:(double)arg2;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_b21f1e06)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

