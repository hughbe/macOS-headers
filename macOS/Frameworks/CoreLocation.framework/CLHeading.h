//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double z;
@property(readonly, nonatomic) double y;
@property(readonly, nonatomic) double x;
@property(readonly, nonatomic) double headingAccuracy;
@property(readonly, nonatomic) double trueHeading;
@property(readonly, nonatomic) double magneticHeading;
- (id)shortDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientHeading:(CDStruct_b560b707)arg1;

@end

