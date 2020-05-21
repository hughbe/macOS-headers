//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface NEIPv6Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSString *_destinationAddress;
    NSNumber *_destinationNetworkPrefixLength;
    NSString *_gatewayAddress;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultRoute;
+ (void)initGlobals;
- (void).cxx_destruct;
@property(copy) NSString *gatewayAddress; // @synthesize gatewayAddress=_gatewayAddress;
@property(readonly) NSNumber *destinationNetworkPrefixLength; // @synthesize destinationNetworkPrefixLength=_destinationNetworkPrefixLength;
@property(readonly) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDefaultRoute;
- (id)initWithDestinationAddress:(id)arg1 networkPrefixLength:(id)arg2;

@end

