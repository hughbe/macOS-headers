//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSArray, SVXDeviceSetupFlowScene, SVXStoreDemo;

@protocol SVXSystemEventMutating <NSObject>
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setOrderedAlarmAndTimerIDs:(NSArray *)arg1;
- (void)setStoreDemo:(SVXStoreDemo *)arg1;
- (void)setDeviceSetupFlowScene:(SVXDeviceSetupFlowScene *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
@end

