//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDate, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>
{
    BOOL _fullAccessLAN;
    BOOL _fullAccessWAN;
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;
    NSDate *_lastModifiedTime;
    NSArray *_lanRules;
    NSArray *_wanRules;
}

+ (id)__decodeRulesFromNetworkDeclarations:(id)arg1 key:(id)arg2 class:(Class)arg3 required:(BOOL)arg4;
+ (BOOL)__decodeFullAccessFromNetworkDeclarations:(id)arg1 key:(id)arg2 fullAccess:(char *)arg3;
+ (BOOL)__decodeNetworkDeclarationsFromJSONDictionary:(id)arg1 networkDeclarations:(id *)arg2;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=hasFullAccessToWAN) BOOL fullAccessWAN; // @synthesize fullAccessWAN=_fullAccessWAN;
@property(readonly, nonatomic) NSArray *wanRules; // @synthesize wanRules=_wanRules;
@property(readonly, nonatomic, getter=hasFullAccessToLAN) BOOL fullAccessLAN; // @synthesize fullAccessLAN=_fullAccessLAN;
@property(readonly, nonatomic) NSArray *lanRules; // @synthesize lanRules=_lanRules;
@property(readonly, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 fullAccessLAN:(BOOL)arg3 lanRules:(id)arg4 fullAccessWAN:(BOOL)arg5 wanRules:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

