//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSData;

@interface WiFiMACAddress : NSObject <NSSecureCoding>
{
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSData *ipv6LinkLocalAddress;
- (id)initWithByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4 byte5:(unsigned char)arg5 byte6:(unsigned char)arg6;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

