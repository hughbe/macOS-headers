//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSummaryItemValidator.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString;

@interface PKShippingMethodValidator : PKPaymentSummaryItemValidator <PKPaymentValidating>
{
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
- (BOOL)isValidWithAPIType:(unsigned long long)arg1 withError:(id *)arg2;
- (BOOL)isValidWithError:(id *)arg1;
- (id)initWithShippingMethod:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

