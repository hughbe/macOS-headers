//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SMNWirelessChangesProtocol
- (void)didAttemptWirelessNetworkSwitch:(BOOL)arg1;
- (void)willAttemptWirelessNetworkSwitch:(BOOL)arg1;
- (void)disassociatedFromCurrentNetwork;
- (void)associatedWithWirelessNetwork:(NSString *)arg1;
- (void)wirelessAccessPointDestroyed;
- (void)wirelessAccessPointCreated:(NSString *)arg1 password:(NSString *)arg2;
@end

