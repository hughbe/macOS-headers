//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID, SPLocationAddress;

@interface SPSafeLocation : NSObject <NSSecureCoding, NSCopying>
{
    double _latitude;
    double _longitude;
    double _horizontalAccuracy;
    double _altitude;
    double _verticalAccuracy;
    double _speed;
    double _speedAccuracy;
    double _course;
    double _courseAccuracy;
    NSNumber *_floorLevel;
    SPLocationAddress *_address;
    NSUUID *_identifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) SPLocationAddress *address; // @synthesize address=_address;
@property(copy, nonatomic) NSNumber *floorLevel; // @synthesize floorLevel=_floorLevel;
@property(nonatomic) double courseAccuracy; // @synthesize courseAccuracy=_courseAccuracy;
@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double speedAccuracy; // @synthesize speedAccuracy=_speedAccuracy;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11 identifier:(id)arg12;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAcuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11;

@end

