//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteAccountHandleMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination
{
    HMDAccount *_account;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDAccount *account; // @synthesize account=_account;
- (id)remoteDestinationString;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4;
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4;

@end

