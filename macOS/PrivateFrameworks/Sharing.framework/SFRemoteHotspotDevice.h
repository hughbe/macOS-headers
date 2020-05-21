//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding>
{
    unsigned char _networkType;
    BOOL _osSupportsAutoHotspot;
    BOOL _supportsCompanionLink;
    BOOL _hasDuplicates;
    NSString *_deviceName;
    NSString *_deviceIdentifier;
    NSNumber *_batteryLife;
    NSNumber *_signalStrength;
    NSString *_model;
    long long _group;
    NSData *_advertisementData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
@property BOOL hasDuplicates; // @synthesize hasDuplicates=_hasDuplicates;
@property(nonatomic) BOOL supportsCompanionLink; // @synthesize supportsCompanionLink=_supportsCompanionLink;
@property long long group; // @synthesize group=_group;
@property BOOL osSupportsAutoHotspot; // @synthesize osSupportsAutoHotspot=_osSupportsAutoHotspot;
@property(retain) NSString *model; // @synthesize model=_model;
@property(retain) NSNumber *signalStrength; // @synthesize signalStrength=_signalStrength;
@property unsigned char networkType; // @synthesize networkType=_networkType;
@property(retain) NSNumber *batteryLife; // @synthesize batteryLife=_batteryLife;
@property(copy) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (unsigned char)networkTypeForIncomingType:(unsigned char)arg1;
- (unsigned char)networkTypeFromInfo:(unsigned int)arg1;
- (id)signalStrengthFromInfo:(unsigned int)arg1;
- (id)batteryLifeFromInfo:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithHotspotInfo:(unsigned int)arg1;
- (BOOL)componentsAreEqualTo:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(CDStruct_56cc8428)arg3;

@end

