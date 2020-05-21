//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WirelessProximity/NSSecureCoding-Protocol.h>

@class NSDictionary, NSUUID;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding>
{
    unsigned char _clientType;
    NSUUID *_peerUUID;
    NSDictionary *_peerTrackingDictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDictionary *peerTrackingDictionary; // @synthesize peerTrackingDictionary=_peerTrackingDictionary;
@property(retain) NSUUID *peerUUID; // @synthesize peerUUID=_peerUUID;
@property unsigned char clientType; // @synthesize clientType=_clientType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

