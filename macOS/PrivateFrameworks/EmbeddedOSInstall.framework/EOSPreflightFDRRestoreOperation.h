//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmbeddedOSInstall/EOSRestoreOperation.h>

@interface EOSPreflightFDRRestoreOperation : EOSRestoreOperation
{
}

- (id)activityObject;
- (id)deviceConnectionTimeoutErrorDescription;
- (BOOL)waitForDeviceDisconnected;
- (double)deviceConnectionTimeout;
- (long long)expectedDeviceMode;
- (long long)matchDeviceModes;
- (long long)restorePhase;
- (void)deviceConnected:(id)arg1;
- (BOOL)preOperation;

@end

