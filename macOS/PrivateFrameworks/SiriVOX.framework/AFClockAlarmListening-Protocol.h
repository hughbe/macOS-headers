//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFClockAlarmObserver, AFClockAlarmSnapshot, NSUUID;

@protocol AFClockAlarmListening <NSObject>
- (void)clockAlarmObserver:(AFClockAlarmObserver *)arg1 snapshotDidUpdateFrom:(AFClockAlarmSnapshot *)arg2 to:(AFClockAlarmSnapshot *)arg3;
- (void)clockAlarmObserver:(AFClockAlarmObserver *)arg1 alarmDidDismiss:(NSUUID *)arg2;
- (void)clockAlarmObserver:(AFClockAlarmObserver *)arg1 alarmDidFire:(NSUUID *)arg2;
@end

