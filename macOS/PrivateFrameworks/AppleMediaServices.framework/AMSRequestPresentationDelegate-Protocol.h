//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest;

@protocol AMSRequestPresentationDelegate <NSObject>
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 completion:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
@end

