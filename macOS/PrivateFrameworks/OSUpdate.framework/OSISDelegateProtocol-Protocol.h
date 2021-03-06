//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSUpdate/NSObject-Protocol.h>

@class NSError, NSString;

@protocol OSISDelegateProtocol <NSObject>
- (void)clientShouldRebootWithShutdownOverReboot:(BOOL)arg1 withResponse:(void (^)(BOOL))arg2;
- (void)helperToolDied;
- (void)prepareRecoveryDidSucceed;
- (void)prepareRecoveryDidFailWithError:(NSError *)arg1;
- (void)prepareRecoveryDidStart;
- (void)prepareOSInstallDidSucceed;
- (void)prepareOSInstallDidFailWithError:(NSError *)arg1;
- (void)prepareOSInstallMessage:(NSString *)arg1;
- (void)prepareOSInstallTimeRemaining:(double)arg1;
- (void)prepareOSInstallProgess:(double)arg1;
- (void)prepareOSInstallDidStart;

@optional
- (void)presentUI:(NSString *)arg1 withResponse:(void (^)(NSDictionary *))arg2;
@end

