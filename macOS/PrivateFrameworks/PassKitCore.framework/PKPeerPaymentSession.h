//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

@interface PKPeerPaymentSession : PKPaymentSession
{
}

- (BOOL)deleteApplet;
- (id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3 shouldReregister:(char *)arg4;
- (id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;

@end

