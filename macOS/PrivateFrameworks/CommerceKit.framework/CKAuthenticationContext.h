//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/NSCopying-Protocol.h>

@class CKAuthenticationSettings, CKDialogContext, CKStoreClient;

@interface CKAuthenticationContext : NSObject <NSCopying>
{
    CKStoreClient *_storeClient;
    CKDialogContext *_dialogContext;
    CKAuthenticationSettings *_settings;
}

+ (id)authenticationContextForStoreClient:(id)arg1;
- (void).cxx_destruct;
@property(retain) CKAuthenticationSettings *settings; // @synthesize settings=_settings;
@property(retain) CKDialogContext *dialogContext; // @synthesize dialogContext=_dialogContext;
@property(readonly) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_viewControllerForAuthentication;
- (void)authenticateWithDialog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signChallenge:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithStoreClient:(id)arg1;
- (void)_signChallenge:(id)arg1 withCaller:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_finishAuthWithResult:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_authenticateWithDialog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

