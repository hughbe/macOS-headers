//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_AYAddress.h>

@interface ISS_AYIPV4Address : ISS_AYAddress
{
    struct sockaddr_in _saddr;
}

- (void)dumpInternal;
- (id)URLToAddressWithScheme:(id)arg1 andPort:(int)arg2 URI:(id)arg3;
- (void)getAddressAsSockAddr:(struct sockaddr *)arg1 length:(int *)arg2;
- (id)addressAsData;
- (unsigned int)_s_addr;
- (int)port;
- (id)addressAsString;
- (id)type;
- (id)initWithSockaddrBuffer:(struct sockaddr *)arg1;

@end

