//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface Authenticator : NSObject
{
    BOOL _syncWaitDone;
    BOOL _wantsClearTextAuthentication;
}

+ (id)sharedClearTextAuthenticator;
+ (id)sharedAuthenticator;
@property(readonly) BOOL wantsClearTextAuthentication; // @synthesize wantsClearTextAuthentication=_wantsClearTextAuthentication;
- (BOOL)isAuthenticated;
- (BOOL)authenticateUsingAuthorizationSync:(id)arg1;
- (void)deauthenticate;
- (BOOL)authenticateUsingExternalFormSync:(id)arg1;
- (void)authenticateUsingExternalForm:(id)arg1;
- (void)authenticateUsingAuthorizationSync:(id)arg1 userName:(id)arg2 password:(id)arg3;
- (void)authenticateUsingAuthorization:(id)arg1 userName:(id)arg2 password:(id)arg3;
- (void)authenticateUsingAuthorization:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initClearTextAuthenticator;
- (id)init;
- (void)_toolStartedNotification:(id)arg1;

@end

