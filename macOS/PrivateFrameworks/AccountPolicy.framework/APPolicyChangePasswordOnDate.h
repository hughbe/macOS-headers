//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountPolicy/APPolicy.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@class NSDate;

@interface APPolicyChangePasswordOnDate : APPolicy <NSCopying, NSSecureCoding>
{
    NSDate *_changeOnDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andDate:(id)arg2;
+ (id)policyWithDate:(id)arg1;
+ (id)policy;
- (void).cxx_destruct;
- (id)_parametersForDate:(id)arg1;
@property(copy) NSDate *changeOnDate; // @synthesize changeOnDate=_changeOnDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 andDate:(id)arg2;
- (id)initWithDate:(id)arg1;
- (id)init;

@end

