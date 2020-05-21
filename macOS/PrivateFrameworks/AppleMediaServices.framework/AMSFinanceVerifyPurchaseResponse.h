//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSFinanceDialogResponse.h>

@class AMSURLTaskInfo, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSFinanceVerifyPurchaseResponse : AMSFinanceDialogResponse
{
    NSDictionary *_responseDictionary;
    AMSURLTaskInfo *_taskInfo;
    long long _verifyType;
}

+ (long long)_verifyTypeFromPayload:(id)arg1;
+ (id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (BOOL)isVerifyPurchasePayload:(id)arg1;
- (void).cxx_destruct;
@property long long verifyType; // @synthesize verifyType=_verifyType;
@property(retain) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)_runCVVRequestForCode:(id)arg1 error:(id *)arg2;
- (id)_runCarrierVerifyCode:(id)arg1 error:(id *)arg2;
- (id)_runCarrierNewCodeWithError:(id *)arg1;
- (id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(char *)arg2;
- (id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(char *)arg2;
- (id)performWithTaskInfo:(id)arg1;
- (id)initWithPayload:(id)arg1 taskInfo:(id)arg2;

@end

