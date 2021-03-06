//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, NSString, NSUUID, TUCall;

@protocol TUCallContainer <NSObject>
@property(readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property(readonly, copy, nonatomic) NSArray *currentCallGroups;
@property(readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property(readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property(readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property(readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property(readonly, nonatomic) BOOL hasCurrentCalls;
@property(readonly, nonatomic) unsigned long long callCountOnDefaultPairedDevice;
@property(readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property(readonly, nonatomic) unsigned long long currentVideoCallCount;
@property(readonly, nonatomic) unsigned long long currentCallCount;
@property(readonly, nonatomic) TUCall *currentVideoCall;
@property(readonly, nonatomic) TUCall *activeVideoCall;
@property(readonly, nonatomic) TUCall *incomingVideoCall;
@property(readonly, nonatomic) TUCall *incomingCall;
@property(readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property(readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property(readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property(readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property(readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property(readonly, copy, nonatomic) NSArray *displayedAudioAndVideoCalls;
@property(readonly, copy, nonatomic) NSArray *displayedCalls;
@property(readonly, copy, nonatomic) NSArray *incomingCalls;
@property(readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property(readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property(readonly, copy, nonatomic) NSArray *currentCalls;
- (BOOL)allCallsAreOfService:(int)arg1;
- (BOOL)allCallsPassTest:(BOOL (^)(TUCall *))arg1;
- (BOOL)anyCallPassesTest:(BOOL (^)(TUCall *))arg1;
- (unsigned long long)countOfCallsPassingTest:(BOOL (^)(TUCall *))arg1;
- (TUCall *)displayedCallFromCalls:(NSArray *)arg1;
- (TUCall *)callWithCallUUID:(NSString *)arg1;
- (TUCall *)callWithUniqueProxyIdentifier:(NSString *)arg1;
- (TUCall *)audioOrVideoCallWithStatus:(int)arg1;
- (TUCall *)videoCallWithStatus:(int)arg1;
- (TUCall *)callWithStatus:(int)arg1;
- (TUCall *)callPassingTest:(BOOL (^)(TUCall *))arg1;
- (NSArray *)callsWithGroupUUID:(NSUUID *)arg1;
- (NSArray *)audioAndVideoCallsWithStatus:(int)arg1;
- (NSArray *)callsWithStatus:(int)arg1;
- (NSArray *)callsPassingTest:(BOOL (^)(TUCall *))arg1;
@end

