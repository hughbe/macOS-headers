//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mondrian/NSSecureCoding-Protocol.h>

@interface MOMSMonitoringProcessInfo : NSObject <NSSecureCoding>
{
    double _cpuUsagePercentage;
    unsigned long long _memoryResidentBytes;
    unsigned long long _memoryAnonymousBytes;
    unsigned long long _memoryPurgeableBytes;
}

+ (BOOL)supportsSecureCoding;
@property unsigned long long memoryPurgeableBytes; // @synthesize memoryPurgeableBytes=_memoryPurgeableBytes;
@property unsigned long long memoryAnonymousBytes; // @synthesize memoryAnonymousBytes=_memoryAnonymousBytes;
@property unsigned long long memoryResidentBytes; // @synthesize memoryResidentBytes=_memoryResidentBytes;
@property double cpuUsagePercentage; // @synthesize cpuUsagePercentage=_cpuUsagePercentage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

