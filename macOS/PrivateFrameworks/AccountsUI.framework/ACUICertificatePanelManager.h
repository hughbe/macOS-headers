//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_semaphore;

@interface ACUICertificatePanelManager : NSObject
{
    BOOL _userAccepted;
    struct __SecTrust *_trust;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;
@property BOOL userAccepted; // @synthesize userAccepted=_userAccepted;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) struct __SecTrust *trust; // @synthesize trust=_trust;
- (void)_certificatePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_showCertificatePanelInWindow:(id)arg1 withAccount:(id)arg2 canContinue:(BOOL)arg3 saveHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showCertificatePanelInWindow:(id)arg1 isSetup:(BOOL)arg2 withAccount:(id)arg3 saveHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showCertificatePanelInWindow:(id)arg1 isSetup:(BOOL)arg2 withAccount:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showCertificatePanelInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithError:(id)arg1;

@end

