//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiVelocity/NSCopying-Protocol.h>
#import <WiFiVelocity/NSSecureCoding-Protocol.h>

@class CLLocation, NSError;

@interface W5SpeedTestResult : NSObject <NSCopying, NSSecureCoding>
{
    long long _direction;
    long long _size;
    CLLocation *_location;
    NSError *_error;
    double _speed;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;

@end

