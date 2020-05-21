//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOWiFiBSS.h>

#import <WiFiPolicy/NSSecureCoding-Protocol.h>
#import <WiFiPolicy/TBAccessPoint-Protocol.h>

@class NSString;
@protocol TBScore;

@interface GEOWiFiBSS (Serialization) <TBAccessPoint, NSSecureCoding>
+ (BOOL)supportsSecureCoding;
- (BOOL)_hasAttribute:(int)arg1;
@property(readonly, nonatomic, getter=isTCPGood) BOOL TCPGood;
@property(readonly, nonatomic, getter=isEdge) BOOL edge;
@property(readonly, nonatomic) id <TBScore> qualityScore;
@property(readonly, nonatomic) id <TBScore> popularityScore;
@property(readonly, nonatomic) NSString *BSSID;
@property(readonly, nonatomic) double longitude;
@property(readonly, nonatomic) double latitude;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

