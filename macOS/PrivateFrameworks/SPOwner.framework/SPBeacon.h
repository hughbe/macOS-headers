//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSSet, NSString, NSUUID, SPBeaconRole, SPHandle, SPLostModeInfo;

@interface SPBeacon : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _accepted;
    NSUUID *_identifier;
    SPHandle *_owner;
    NSString *_name;
    NSString *_model;
    SPBeaconRole *_role;
    SPLostModeInfo *_lostModeInfo;
    NSSet *_shares;
    NSDictionary *_taskInformation;
    NSString *_systemVersion;
    long long _vendorId;
    long long _productId;
    NSString *_stableIdentifier;
    NSDate *_pairingDate;
    NSString *_correlationIdentifier;
}

+ (id)SPOwner;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *correlationIdentifier; // @synthesize correlationIdentifier=_correlationIdentifier;
@property(copy, nonatomic) NSDate *pairingDate; // @synthesize pairingDate=_pairingDate;
@property(copy, nonatomic) NSString *stableIdentifier; // @synthesize stableIdentifier=_stableIdentifier;
@property(nonatomic) long long productId; // @synthesize productId=_productId;
@property(nonatomic) long long vendorId; // @synthesize vendorId=_vendorId;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSDictionary *taskInformation; // @synthesize taskInformation=_taskInformation;
@property(copy, nonatomic) NSSet *shares; // @synthesize shares=_shares;
@property(copy, nonatomic) SPLostModeInfo *lostModeInfo; // @synthesize lostModeInfo=_lostModeInfo;
@property(copy, nonatomic) SPBeaconRole *role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL accepted; // @synthesize accepted=_accepted;
@property(copy, nonatomic) SPHandle *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

