//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface NPUsageReport : NSObject <NSSecureCoding>
{
    unsigned char _addressFamily;
    unsigned int _edgeIndex;
    unsigned int _keybagGeneration;
    unsigned int _waldoTimestamp;
    NSString *_signingIdentifier;
    long long _fallbackReason;
    NSUUID *_dayPassUUID;
    unsigned long long _rtt;
    NSString *_geohash;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned int waldoTimestamp; // @synthesize waldoTimestamp=_waldoTimestamp;
@property(nonatomic) unsigned int keybagGeneration; // @synthesize keybagGeneration=_keybagGeneration;
@property(nonatomic) unsigned int edgeIndex; // @synthesize edgeIndex=_edgeIndex;
@property(nonatomic) unsigned char addressFamily; // @synthesize addressFamily=_addressFamily;
@property(retain, nonatomic) NSString *geohash; // @synthesize geohash=_geohash;
@property(nonatomic) unsigned long long rtt; // @synthesize rtt=_rtt;
@property(retain, nonatomic) NSUUID *dayPassUUID; // @synthesize dayPassUUID=_dayPassUUID;
@property(readonly, nonatomic) long long fallbackReason; // @synthesize fallbackReason=_fallbackReason;
@property(readonly, nonatomic) NSString *signingIdentifier; // @synthesize signingIdentifier=_signingIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningIdentifier:(id)arg1 fallbackReason:(long long)arg2;

@end

