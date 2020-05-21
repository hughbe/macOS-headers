//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface PKTransitCommutePlanPackage : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_transitCommutePlans;
    unsigned long long _transitCommutePlanType;
    NSMutableDictionary *_commutePlanLookupDictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commutePlanLookupDictionary; // @synthesize commutePlanLookupDictionary=_commutePlanLookupDictionary;
@property(nonatomic) unsigned long long transitCommutePlanType; // @synthesize transitCommutePlanType=_transitCommutePlanType;
@property(copy, nonatomic) NSArray *transitCommutePlans; // @synthesize transitCommutePlans=_transitCommutePlans;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)planForIdentifier:(id)arg1;
- (id)initWithDictionary:(id)arg1 backFieldBuckets:(id)arg2 bundle:(id)arg3 privateBundle:(id)arg4;

@end

