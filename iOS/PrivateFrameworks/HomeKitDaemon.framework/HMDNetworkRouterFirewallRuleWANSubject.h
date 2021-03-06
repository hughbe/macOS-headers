/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject {
    HMDNetworkRouterFirewallRuleWANAddressRange * _addressRange;
    NSArray * _addresses;
    NSArray * _hostnames;
}

@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange;
@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, readonly) NSArray *hostnames;

- (void).cxx_destruct;
- (id)addressRange;
- (id)addresses;
- (id)attributeDescriptions;
- (id)hostnames;
- (id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3;
- (id)prettyJSONDictionary;

@end
