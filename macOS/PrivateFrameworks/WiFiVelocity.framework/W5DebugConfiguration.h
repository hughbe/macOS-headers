//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiVelocity/NSCopying-Protocol.h>
#import <WiFiVelocity/NSSecureCoding-Protocol.h>

@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    long long _wifi;
    long long _megaWiFiProfile;
    long long _noLoggingWiFiProfile;
    long long _eapol;
    long long _bluetooth;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long bluetooth; // @synthesize bluetooth=_bluetooth;
@property(nonatomic) long long eapol; // @synthesize eapol=_eapol;
@property(nonatomic) long long noLoggingWiFiProfile; // @synthesize noLoggingWiFiProfile=_noLoggingWiFiProfile;
@property(nonatomic) long long megaWiFiProfile; // @synthesize megaWiFiProfile=_megaWiFiProfile;
@property(nonatomic) long long wifi; // @synthesize wifi=_wifi;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDebugConfiguration:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;

@end

