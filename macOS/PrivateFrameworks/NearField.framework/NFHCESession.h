//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearField/NFSession.h>

#import <NearField/NFHostEmulationSessionCallbacks-Protocol.h>

@class NFWeakReference, NSString;
@protocol NFHCESessionDelegate;

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks>
{
    NFWeakReference *_delegate;
}

- (void)didReceiveAPDU:(id)arg1;
- (void)didDisconnectFromReader;
- (void)didConnectToReader;
- (void)didEndUnexpectedly;
- (id)readAPDU:(id *)arg1;
- (id)sendAPDU:(id)arg1;
- (id)stopEmulation;
- (id)startEmulation;
- (void)endSession;
@property id <NFHCESessionDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

