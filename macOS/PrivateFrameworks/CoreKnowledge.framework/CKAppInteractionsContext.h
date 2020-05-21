//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding>
{
    MISSING_TYPE *_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    MISSING_TYPE *numberOfDiscardedDonationsByIntentTypeAndBundleId;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3;
- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

