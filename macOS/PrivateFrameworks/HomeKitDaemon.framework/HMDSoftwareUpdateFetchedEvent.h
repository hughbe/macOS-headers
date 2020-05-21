//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _userInitiated;
    BOOL _newUpdateFetched;
}

+ (id)eventWasUserInitiated:(BOOL)arg1 wasNewUpdateFetched:(BOOL)arg2;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic, getter=wasNewUpdateFetched) BOOL newUpdateFetched; // @synthesize newUpdateFetched=_newUpdateFetched;
@property(nonatomic, getter=wasUserInitiated) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

