//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CLLocation, NSNumber, NSString;

@interface PKPaymentDeviceMetadata : NSObject <NSSecureCoding>
{
    NSString *_deviceName;
    NSNumber *_primaryJSBLSequenceCounter;
    NSString *_secureElementIdentifier;
    NSString *_uniqueDeviceIdentifier;
    NSNumber *_uniqueChipIdentifier;
    NSString *_serialNumber;
    NSString *_phoneNumber;
    NSString *_signedPhoneNumber;
    NSString *_signedPhoneNumberVersion;
    CLLocation *_location;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *signedPhoneNumberVersion; // @synthesize signedPhoneNumberVersion=_signedPhoneNumberVersion;
@property(copy, nonatomic) NSString *signedPhoneNumber; // @synthesize signedPhoneNumber=_signedPhoneNumber;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSNumber *uniqueChipIdentifier; // @synthesize uniqueChipIdentifier=_uniqueChipIdentifier;
@property(copy, nonatomic) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(copy, nonatomic) NSNumber *primaryJSBLSequenceCounter; // @synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (BOOL)isEqualToPaymentDeviceMetadata:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) __weak NSString *extensiveLatitude;
@property(readonly, nonatomic) __weak NSString *extensiveLongitude;
- (id)dictionaryRepresentation;

@end

