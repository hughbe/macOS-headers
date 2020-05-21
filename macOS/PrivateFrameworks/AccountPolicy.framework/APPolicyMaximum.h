//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountPolicy/APPolicy.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface APPolicyMaximum : APPolicy <NSCopying, NSSecureCoding>
{
    NSNumber *_maximum;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSNumber *maximum; // @synthesize maximum=_maximum;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 andMaximum:(id)arg2;

@end

