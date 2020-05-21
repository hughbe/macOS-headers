//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, __CFN_TaskMetrics;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding>
{
    __CFN_TaskMetrics *__metrics;
}

+ (id)new;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) __CFN_TaskMetrics *_metrics; // @synthesize _metrics=__metrics;
- (id)description;
@property(readonly) unsigned long long redirectCount;
@property(readonly, copy) NSDateInterval *taskInterval;
@property(readonly, copy) NSArray *transactionMetrics;
- (id)initWithMetrics:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

