//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2IKESPI, NSArray;

@interface NEIKEv2IKESAPayload : NEIKEv2Payload
{
    NSArray *_proposals;
    NEIKEv2IKESPI *_rekeyIKESPI;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NEIKEv2IKESPI *rekeyIKESPI; // @synthesize rekeyIKESPI=_rekeyIKESPI;
@property(retain) NSArray *proposals; // @synthesize proposals=_proposals;
- (BOOL)parsePayloadData;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end

