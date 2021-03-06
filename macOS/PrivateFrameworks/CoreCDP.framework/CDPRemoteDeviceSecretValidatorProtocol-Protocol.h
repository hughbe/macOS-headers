//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError, NSString;

@protocol CDPRemoteDeviceSecretValidatorProtocol
@property(nonatomic) unsigned long long supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(void (^)(unsigned long long))arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDeviceWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)cancelValidationWithError:(NSError *)arg1;
- (void)validateRecoveryKey:(NSString *)arg1 withCompletion:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)validateSecret:(NSString *)arg1 devices:(NSArray *)arg2 type:(unsigned long long)arg3 withCompletion:(void (^)(BOOL, BOOL, NSError *))arg4;
@end

