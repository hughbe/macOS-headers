//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface USCategoryUsageReport : NSObject <NSSecureCoding>
{
    NSString *_categoryIdentifier;
    double _totalUsageTime;
    NSArray *_applicationUsage;
    NSArray *_webUsage;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *webUsage; // @synthesize webUsage=_webUsage;
@property(copy) NSArray *applicationUsage; // @synthesize applicationUsage=_applicationUsage;
@property(readonly) double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;
@property(readonly, copy) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3;
- (id)initWithCategoryIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsage:(id)arg3 webUsage:(id)arg4;

@end

