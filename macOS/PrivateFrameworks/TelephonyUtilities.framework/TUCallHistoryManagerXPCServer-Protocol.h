//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSUUID;
@protocol TUCallHistoryManagerXPCClient;

@protocol TUCallHistoryManagerXPCServer <NSObject>
- (void)unregisterClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (void)registerClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (oneway void)updateOutgoingLocalParticipantUUID:(NSUUID *)arg1 forCallsWithOutgoingLocalParticipantUUID:(NSUUID *)arg2;
@end

