//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isWifiCallingAvailable;
    BOOL _isVoLTECallingAvailable;
    BOOL _isCSCallingAvailable;
    BOOL _isEmergencyCallingOnWifiAllowed;
    BOOL _isEmergencyCallingOnWifiAvailable;
    BOOL _isCarrierSupportsEmergencyCallOnWifiNoLimit;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isCarrierSupportsEmergencyCallOnWifiNoLimit; // @synthesize isCarrierSupportsEmergencyCallOnWifiNoLimit=_isCarrierSupportsEmergencyCallOnWifiNoLimit;
@property(nonatomic) BOOL isEmergencyCallingOnWifiAvailable; // @synthesize isEmergencyCallingOnWifiAvailable=_isEmergencyCallingOnWifiAvailable;
@property(nonatomic) BOOL isEmergencyCallingOnWifiAllowed; // @synthesize isEmergencyCallingOnWifiAllowed=_isEmergencyCallingOnWifiAllowed;
@property(nonatomic) BOOL isCSCallingAvailable; // @synthesize isCSCallingAvailable=_isCSCallingAvailable;
@property(nonatomic) BOOL isVoLTECallingAvailable; // @synthesize isVoLTECallingAvailable=_isVoLTECallingAvailable;
@property(nonatomic) BOOL isWifiCallingAvailable; // @synthesize isWifiCallingAvailable=_isWifiCallingAvailable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

