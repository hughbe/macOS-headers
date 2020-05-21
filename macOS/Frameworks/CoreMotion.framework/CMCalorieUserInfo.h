//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMCalorieUserInfo : CMLogItem
{
    double fAge;
    long long fGender;
    double fHeight;
    double fWeight;
    long long fCondition;
}

+ (id)genderString:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) long long condition;
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) long long gender;
@property(readonly, nonatomic) double age;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5;
- (id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4;

@end

