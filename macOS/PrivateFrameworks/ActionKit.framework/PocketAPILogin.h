//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>
#import <ActionKit/PocketAPIDelegate-Protocol.h>

@class NSOperationQueue, NSString, PocketAPI;
@protocol PocketAPIDelegate;

@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate>
{
    PocketAPI *API;
    NSString *uuid;
    NSString *requestToken;
    NSString *accessToken;
    NSOperationQueue *operationQueue;
    id <PocketAPIDelegate> delegate;
    BOOL didStart;
    BOOL didFinish;
    BOOL reverseAuth;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, retain, nonatomic) NSString *accessToken; // @synthesize accessToken;
@property(readonly, retain, nonatomic) NSString *requestToken; // @synthesize requestToken;
@property(readonly, retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(readonly, retain, nonatomic) PocketAPI *API; // @synthesize API;
- (void)loginDidFinish:(BOOL)arg1;
- (void)loginDidStart;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPILoggedIn:(id)arg1;
- (void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2;
- (void)convertRequestTokenToAccessToken;
- (void)fetchRequestToken;
- (id)redirectURL;
- (id)initWithAPI:(id)arg1 delegate:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)_setReverseAuth:(BOOL)arg1;
- (void)_setRequestToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

