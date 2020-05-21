//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWiFi/NSCopying-Protocol.h>
#import <CoreWiFi/NSSecureCoding-Protocol.h>

@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _roundTripTime;
    long long _RSSI;
    unsigned long long _channel;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(nonatomic) long long RSSI; // @synthesize RSSI=_RSSI;
@property(nonatomic) unsigned long long roundTripTime; // @synthesize roundTripTime=_roundTripTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRangingMeasurement:(id)arg1;
- (id)description;

@end

