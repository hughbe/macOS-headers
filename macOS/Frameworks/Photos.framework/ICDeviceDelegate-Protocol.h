//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class ICDevice, NSDictionary, NSError;

@protocol ICDeviceDelegate <NSObject>
- (void)device:(ICDevice *)arg1 didOpenSessionWithError:(NSError *)arg2;
- (void)didRemoveDevice:(ICDevice *)arg1;
- (void)device:(ICDevice *)arg1 didCloseSessionWithError:(NSError *)arg2;

@optional
- (void)deviceDidChangeSharingState:(ICDevice *)arg1;
- (void)device:(ICDevice *)arg1 didEjectWithError:(NSError *)arg2;
- (void)device:(ICDevice *)arg1 didEncounterError:(NSError *)arg2;
- (void)device:(ICDevice *)arg1 didReceiveStatusInformation:(NSDictionary *)arg2;
- (void)deviceDidChangeName:(ICDevice *)arg1;
- (void)deviceDidBecomeReady:(ICDevice *)arg1;
@end

