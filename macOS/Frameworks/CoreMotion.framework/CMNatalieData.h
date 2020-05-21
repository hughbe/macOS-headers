//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate, NSNumber, NSUUID;

@interface CMNatalieData : CMLogItem
{
    long long fRecordId;
    double fStartDate;
    long long fActivityType;
    double fMets;
    double fNatalies;
    double fBasalNatalies;
    NSUUID *fSourceId;
}

+ (id)maxNatalieEntries;
+ (BOOL)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) long long recordId;
@property(readonly, nonatomic) long long activityType;
@property(readonly, nonatomic) long long session;
@property(readonly, nonatomic) NSNumber *basalNatalies;
@property(readonly, nonatomic) NSNumber *natalies;
@property(readonly, nonatomic) NSNumber *mets;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 activityType:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7;

@end

