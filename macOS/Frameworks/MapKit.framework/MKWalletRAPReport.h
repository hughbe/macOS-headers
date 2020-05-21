//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORPFeedbackRequestParameters, GEORPProblem, NSString;

@interface MKWalletRAPReport : NSObject
{
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    GEORPFeedbackRequestParameters *_requestParameters;
    GEORPProblem *_problem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEORPProblem *problem; // @synthesize problem=_problem;
@property(readonly, nonatomic) GEORPFeedbackRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(copy, nonatomic) NSString *correlationId;
@property(copy, nonatomic) NSString *reportersComment;
@property(copy, nonatomic) NSString *merchantAdamId;
- (id)initForMerchantIssue:(unsigned long long)arg1 merchantIndustryCode:(long long)arg2 mapsIdentifier:(unsigned long long)arg3 merchantName:(id)arg4 merchantRawName:(id)arg5 merchantIndustryCategory:(id)arg6 merchantURL:(id)arg7 merchantFormattedAddress:(id)arg8 transactionTime:(double)arg9 transactionType:(id)arg10 transactionLocation:(CDStruct_c3b9c2ee)arg11;

@end

