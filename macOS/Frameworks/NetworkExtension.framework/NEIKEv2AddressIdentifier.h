//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Identifier.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier
{
    NWAddressEndpoint *_address;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NWAddressEndpoint *address; // @synthesize address=_address;
- (id)stringValue;
- (id)identifierData;
- (unsigned long long)identifierType;
- (id)initWithAddress:(id)arg1;

@end

