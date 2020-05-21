//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SLLinkedInRemoteSessionProtocol;

@interface SLLinkedInSession : NSObject
{
    id <SLLinkedInRemoteSessionProtocol> _remoteSession;
}

- (void).cxx_destruct;
- (void)revokeMasterAccessToken;
- (void)revokeAccessTokenForAppWithID:(id)arg1 andBundleID:(id)arg2;
- (id)permaLinkFromLastStatusUpdate:(id *)arg1;
- (void)sendStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)uploadProfilePicture:(id)arg1 error:(id *)arg2;
- (id)memberProfile;
- (void)setActiveAccountIdentifier:(id)arg1;
- (id)init;

@end

