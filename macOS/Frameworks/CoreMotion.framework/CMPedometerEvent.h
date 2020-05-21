//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMPedometerEvent : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *fDate;
    long long fType;
}

+ (id)eventStringFromType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=fType;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=fDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithEventDate:(id)arg1 type:(long long)arg2;

@end

