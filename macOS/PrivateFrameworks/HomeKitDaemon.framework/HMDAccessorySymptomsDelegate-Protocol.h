//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDSymptomManager, NSSet, NSUUID;

@protocol HMDAccessorySymptomsDelegate <NSObject>
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeSFDeviceIdentifier:(NSUUID *)arg2;
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeLocalSymptoms:(NSSet *)arg2;
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeBroadcastedSymptoms:(NSSet *)arg2;
@end

