//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HAPAccessory, NSNumber, NSString;

@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding>
{
    BOOL _reachable;
    HAPAccessory *_hapAccessory;
    NSString *_serverIdentifier;
    NSString *_protocolVersion;
    NSNumber *_instanceID;
    long long _linkType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL reachable; // @synthesize reachable=_reachable;
@property long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) HAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithHAPAccessory:(id)arg1;
- (id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3 reachable:(BOOL)arg4;

@end

