//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>
#import <EventKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_endDate;
    unsigned long long _occurrenceCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) BOOL usesEndDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOccurrenceCount:(unsigned long long)arg1;
- (id)initWithEndDate:(id)arg1;

@end

