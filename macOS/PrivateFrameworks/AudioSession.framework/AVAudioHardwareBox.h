//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioSession/AVAudioHardwareObject.h>

@class NSArray, NSString;

@interface AVAudioHardwareBox : AVAudioHardwareObject
{
}

@property(readonly, nonatomic) NSArray *controls;
@property(readonly, nonatomic) NSArray *clocks;
@property(readonly, nonatomic) NSArray *devices;
@property(readonly, nonatomic) unsigned long long acquistionStatus;
@property(readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, nonatomic) BOOL hasMIDI;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic) BOOL hasAudio;
@property(readonly, nonatomic) unsigned int transportType;
@property(readonly, nonatomic) NSString *UID;

@end

