//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString;

@interface PKPeerPaymentBankLookupResponse : PKPeerPaymentWebServiceResponse
{
    BOOL _success;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
- (id)initWithData:(id)arg1;

@end

