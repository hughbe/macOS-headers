//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDiscoveryManager;

@interface GKDiscovery : NSObject
{
    GKDiscoveryManager *_manager;
}

@property(retain, nonatomic) GKDiscoveryManager *manager; // @synthesize manager=_manager;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)stopBrowsing;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)stopAdvertising;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler;
@property(copy, nonatomic) CDUnknownBlockType playerLostHandler;
@property(copy, nonatomic) CDUnknownBlockType playerFoundHandler;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)init;

@end

