//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload
{
    unsigned long long _protocol;
    NSArray *_spis;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NSArray *spis; // @synthesize spis=_spis;
@property unsigned long long protocol; // @synthesize protocol=_protocol;
- (BOOL)parsePayloadData;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end

