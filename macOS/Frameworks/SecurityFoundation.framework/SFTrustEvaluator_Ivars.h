//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

__attribute__((visibility("hidden")))
@interface SFTrustEvaluator_Ivars : NSObject
{
    SFTrustPolicy *trustPolicy;
    SFRevocationPolicy *revocationPolicy;
    NSArray *applicationAnchorCertificates;
    struct {
        unsigned int allowCertificateFetching:1;
        unsigned int trustSystemAnchorCertificates:1;
    } trustEvaluatorFlags;
}

- (void).cxx_destruct;

@end

