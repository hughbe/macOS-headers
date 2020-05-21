//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface CMExerciseMinuteData : NSObject <NSSecureCoding, NSCopying>
{
    long long fRecordId;
    double fStartDate;
    NSUUID *fSourceId;
}

+ (id)maxExerciseMinuteDataEntries;
+ (BOOL)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) long long recordId;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 sourceId:(id)arg3;

@end

