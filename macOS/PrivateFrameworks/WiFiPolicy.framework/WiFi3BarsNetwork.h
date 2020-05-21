//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPolicy/WiFiCandidateNetwork-Protocol.h>

@class NSSet, NSString;
@protocol TBNetwork, TBScore;

@interface WiFi3BarsNetwork : NSObject <WiFiCandidateNetwork>
{
    BOOL matched;
    BOOL _unwantedNetworkName;
    NSString *password;
    NSSet *_attributes;
    id <TBScore> _qualityScore;
    id <TBScore> _popularityScore;
    NSString *_uniqueIdentifier;
    NSString *_SSID;
    id <TBNetwork> _network;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL unwantedNetworkName; // @synthesize unwantedNetworkName=_unwantedNetworkName;
@property(retain, nonatomic) id <TBNetwork> network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) BOOL matched; // @synthesize matched;
@property(readonly, nonatomic) id <TBScore> popularityScore; // @synthesize popularityScore=_popularityScore;
@property(readonly, nonatomic) id <TBScore> qualityScore; // @synthesize qualityScore=_qualityScore;
@property(readonly, nonatomic) NSSet *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password;
@property(readonly, copy) NSString *description;
- (BOOL)containsAccessPointMatchingBSSIDs:(id)arg1;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) NSSet *accessPoints;
- (id)initWithNetwork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

