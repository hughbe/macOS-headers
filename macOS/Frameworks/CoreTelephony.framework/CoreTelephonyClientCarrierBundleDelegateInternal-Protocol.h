//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientCarrierBundleDelegateInternal <NSObject>

@optional
- (void)defaultBundleChange;
- (void)operatorBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)carrierBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
@end

