//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterICMPTypeList, HMDNetworkRouterIPAddress, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterRuleDirection, NSString;

@interface HMDNetworkRouterStaticICMPRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;
    HMDNetworkRouterIPAddress *_destinationIPAddress;
    HMDNetworkRouterICMPTypeList *_icmpTypeList;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDNetworkRouterICMPTypeList *icmpTypeList; // @synthesize icmpTypeList=_icmpTypeList;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // @synthesize destinationIPAddress=_destinationIPAddress;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 icmpTypeList:(id)arg4;
- (id)init;
- (void)addTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

