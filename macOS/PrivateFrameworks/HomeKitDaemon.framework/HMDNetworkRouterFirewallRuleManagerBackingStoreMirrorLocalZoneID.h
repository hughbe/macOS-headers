//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBLocalZoneID-Protocol.h>

@class NSArray, NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID>
{
    NSData *_token;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *labels;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

