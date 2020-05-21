//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigrationNetworking/SMNWirelessController.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SMWirelessController : SMNWirelessController
{
    NSObject<OS_dispatch_semaphore> *_wirelessNetworkSwitchCancellation;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_semaphore> *wirelessNetworkSwitchCancellation; // @synthesize wirelessNetworkSwitchCancellation=_wirelessNetworkSwitchCancellation;
- (BOOL)waitForReconnection:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (BOOL)prepareSourceMachine:(id)arg1 ssid:(id)arg2 password:(id)arg3 error:(id *)arg4;
- (void)stopWirelessNetworkSwitch;
- (BOOL)attemptAccessPointAssocationWithSystem:(id)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)attemptAccessPointAssocationWithSystem:(id)arg1 error:(id *)arg2;

@end

