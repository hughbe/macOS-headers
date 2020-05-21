//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDHomeInviteLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    int _stage;
    int _responseType;
}

+ (id)uuid;
+ (id)homeInvitationWithStage:(int)arg1 responseType:(int)arg2;
+ (id)homeInvitationWithStage:(int)arg1;
@property(readonly, nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(readonly, nonatomic) int stage; // @synthesize stage=_stage;
- (id)initInvitationWithStage:(int)arg1 responseType:(int)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

