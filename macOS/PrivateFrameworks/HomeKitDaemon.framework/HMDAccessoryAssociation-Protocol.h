//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDHome;

@protocol HMDAccessoryAssociation <NSObject>
@property(readonly) BOOL supportsAssociation;
- (void)associateToHome:(HMDHome *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

