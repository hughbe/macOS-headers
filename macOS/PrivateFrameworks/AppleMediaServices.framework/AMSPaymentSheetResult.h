//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBiometricsSignatureResult, NSString;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetResult : NSObject
{
    NSString *_passwordEquivalentToken;
    NSString *_paymentToken;
    AMSBiometricsSignatureResult *_signatureResult;
}

- (void).cxx_destruct;
@property(retain) AMSBiometricsSignatureResult *signatureResult; // @synthesize signatureResult=_signatureResult;
@property(retain) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;

@end

