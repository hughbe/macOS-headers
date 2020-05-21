//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, TransparencyApplication;

@interface KTVerifier : NSObject
{
    NSString *_applicationIdentifier;
    NSXPCConnection *_connection;
    TransparencyApplication *_application;
}

- (void).cxx_destruct;
@property(retain) TransparencyApplication *application; // @synthesize application=_application;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)copyApplicationTranscript:(CDUnknownBlockType)arg1;
- (void)copyDaemonState:(CDUnknownBlockType)arg1;
- (void)clearPublicKeyStoreState:(CDUnknownBlockType)arg1;
- (void)clearLogClientConfiguration:(CDUnknownBlockType)arg1;
- (void)copyLogClientConfiguration:(CDUnknownBlockType)arg1;
- (void)forceDutyCycle:(CDUnknownBlockType)arg1;
- (void)copyKeyStoreStateFromDisk:(CDUnknownBlockType)arg1;
- (void)copyKeyStoreState:(CDUnknownBlockType)arg1;
- (void)copyDataStoreStatistics:(CDUnknownBlockType)arg1;
- (void)copyApplicationState:(CDUnknownBlockType)arg1;
- (void)forceApplicationConfig:(CDUnknownBlockType)arg1;
- (void)forceApplicationKeysDownload:(CDUnknownBlockType)arg1;
- (void)forceApplicationKeysFetch:(CDUnknownBlockType)arg1;
- (void)forceConfigUpdate:(CDUnknownBlockType)arg1;
- (void)clearState:(CDUnknownBlockType)arg1;
- (void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(CDUnknownBlockType)arg6;
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(CDUnknownBlockType)arg5;
- (void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 promiseCompletionBlock:(CDUnknownBlockType)arg5;
- (void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 promiseCompletionBlock:(CDUnknownBlockType)arg5;
- (id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 queryRequest:(id)arg4 insertResponse:(id)arg5 error:(id *)arg6;
- (id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 error:(id *)arg5;
- (id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id *)arg6;
- (id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 error:(id *)arg5;
- (void)invokeXPCSynchronousCallWithBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)invokeXPCAsynchronousCallWithBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)initWithApplication:(id)arg1;

@end

