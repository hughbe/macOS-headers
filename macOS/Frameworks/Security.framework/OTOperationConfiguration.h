//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/NSSecureCoding-Protocol.h>

@interface OTOperationConfiguration : NSObject <NSSecureCoding>
{
    BOOL _discretionaryNetwork;
    BOOL _useCachedAccountStatus;
    unsigned long long _timeoutWaitForCKAccount;
    long long _qualityOfService;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL useCachedAccountStatus; // @synthesize useCachedAccountStatus=_useCachedAccountStatus;
@property(nonatomic) BOOL discretionaryNetwork; // @synthesize discretionaryNetwork=_discretionaryNetwork;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) unsigned long long timeoutWaitForCKAccount; // @synthesize timeoutWaitForCKAccount=_timeoutWaitForCKAccount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

