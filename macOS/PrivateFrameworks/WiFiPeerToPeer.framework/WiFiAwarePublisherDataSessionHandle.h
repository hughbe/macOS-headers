//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class WiFiMACAddress;

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding>
{
    unsigned char _datapathID;
    WiFiMACAddress *_initiatorDataAddress;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) WiFiMACAddress *initiatorDataAddress; // @synthesize initiatorDataAddress=_initiatorDataAddress;
@property(readonly, nonatomic) unsigned char datapathID; // @synthesize datapathID=_datapathID;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDatapathID:(unsigned char)arg1 initiatorDataAddress:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

