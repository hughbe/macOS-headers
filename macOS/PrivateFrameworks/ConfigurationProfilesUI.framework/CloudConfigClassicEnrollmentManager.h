//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPUI_EnrollmentHostWindowInfo, CPUI_ProgressWindowController, CloudConfigClassicAuthWindowController, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CloudConfigClassicEnrollmentManager : NSObject
{
    _Bool fSyntheticInputDetected;
    CDUnknownBlockType _completionHandler;
    CPUI_EnrollmentHostWindowInfo *_hostWindowInfo;
    CPUI_ProgressWindowController *_progress;
    NSString *_origHostWindowProgressText;
    NSString *_userGUID;
    NSDictionary *_authInfo;
    NSDictionary *_cloudConfig;
    NSString *_credentialsPrompt;
    NSData *_profileDataToInstall;
    CloudConfigClassicAuthWindowController *_authController;
}

- (void).cxx_destruct;
@property(retain) CloudConfigClassicAuthWindowController *authController; // @synthesize authController=_authController;
@property(retain) NSData *profileDataToInstall; // @synthesize profileDataToInstall=_profileDataToInstall;
@property(retain) NSString *credentialsPrompt; // @synthesize credentialsPrompt=_credentialsPrompt;
@property(retain) NSDictionary *cloudConfig; // @synthesize cloudConfig=_cloudConfig;
@property(retain) NSDictionary *authInfo; // @synthesize authInfo=_authInfo;
@property(retain) NSString *userGUID; // @synthesize userGUID=_userGUID;
@property(retain) NSString *origHostWindowProgressText; // @synthesize origHostWindowProgressText=_origHostWindowProgressText;
@property(retain) CPUI_ProgressWindowController *progress; // @synthesize progress=_progress;
@property(retain) CPUI_EnrollmentHostWindowInfo *hostWindowInfo; // @synthesize hostWindowInfo=_hostWindowInfo;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)startForWindowInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryDownload;
- (void)promptForAuth;
- (void)removeProgress;
- (void)showProgress;
- (_Bool)useHostWindowProgressField;
- (struct TLocalizedRsrcs *)locRsrcs;
- (_Bool)syntheticInputDetected;
- (void)callCompletionHandler:(long long)arg1 error:(id)arg2;
- (void)dealloc;
- (id)init;

@end

