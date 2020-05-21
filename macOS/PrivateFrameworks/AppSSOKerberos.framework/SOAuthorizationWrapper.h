//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSSOKerberos/SOAuthorizationDelegate-Protocol.h>

@class NSString, SOAuthorization;

@interface SOAuthorizationWrapper : NSObject <SOAuthorizationDelegate>
{
    SOAuthorization *_authorization;
    CDUnknownBlockType _authorizationCompletion;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType authorizationCompletion; // @synthesize authorizationCompletion=_authorizationCompletion;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidNotHandle:(id)arg1;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

