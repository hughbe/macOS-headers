//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID;

@interface CLBeaconIdentityConstraint : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSNumber *_major;
    NSNumber *_minor;
}

+ (BOOL)supportsSecureCoding;
+ (id)any;
@property(readonly, copy, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(readonly, copy, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2;
- (id)initWithUUID:(id)arg1;
- (id)init;
- (void)dealloc;

@end

