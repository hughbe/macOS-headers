//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKAuthorization, AKAuthorizationUserResponse, NSError;

@protocol AKAuthorizationPresenterHostProtocol <NSObject>
- (void)continueFetchingIconWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)authorizationRequestFinishedWithAuthorization:(AKAuthorization *)arg1 error:(NSError *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)authorizationRequestInitiatedWithUserProvidedInformation:(AKAuthorizationUserResponse *)arg1 completion:(void (^)(AKAuthorization *, NSError *))arg2;
@end

