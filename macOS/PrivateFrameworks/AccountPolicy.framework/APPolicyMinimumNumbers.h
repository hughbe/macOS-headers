//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountPolicy/APPolicyMinimum.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@interface APPolicyMinimumNumbers : APPolicyMinimum <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andMinimum:(id)arg2;
+ (id)policyWithMinimum:(id)arg1;
- (id)_parametersForMinimum:(id)arg1;
- (id)_contentDescriptionsForMinimum:(id)arg1;
- (id)_contentForMinimum:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andMinimum:(id)arg2;
- (id)initWithMinimum:(id)arg1;

@end

