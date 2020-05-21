//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCBasebandCodecNotifications-Protocol.h>

@class NSError;

@protocol VCAudioIOControllerDelegate <VCBasebandCodecNotifications>
- (void)spatialAudioSourceIDChanged:(unsigned long long)arg1;
- (void)didResume;
- (void)didSuspend;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription)arg1;
- (void)didStop:(BOOL)arg1 error:(NSError *)arg2;
- (void)didStart:(BOOL)arg1 error:(NSError *)arg2;
@end

