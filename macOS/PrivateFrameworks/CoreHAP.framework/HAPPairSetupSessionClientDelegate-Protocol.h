//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPPairSetupSessionDelegate-Protocol.h>

@class HAPPairSetupSession;

@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(void (^)(NSString *, NSError *))arg2;

@optional
- (BOOL)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(HAPPairSetupSession *)arg1;
@end

