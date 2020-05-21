//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSSOKerberos/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, SOAuthorization;

@protocol SOAuthorizationDelegate <NSObject>

@optional
- (void)authorization:(SOAuthorization *)arg1 presentViewController:(id)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPResponse:(NSHTTPURLResponse *)arg2 httpBody:(NSData *)arg3;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPAuthorizationHeaders:(NSDictionary *)arg2;
- (void)authorizationDidComplete:(SOAuthorization *)arg1;
- (void)authorizationDidCancel:(SOAuthorization *)arg1;
- (void)authorizationDidNotHandle:(SOAuthorization *)arg1;
@end

