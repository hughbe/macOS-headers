//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CRKTrustEvaluationPolicies : NSObject
{
    NSArray *_policyRefs;
}

+ (id)defaultPolicicesForServerEvaluation;
+ (id)defaultPoliciesForClientEvaluation;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *policyRefs; // @synthesize policyRefs=_policyRefs;
- (id)initWithPolicyRefs:(id)arg1;
- (id)init;

@end

