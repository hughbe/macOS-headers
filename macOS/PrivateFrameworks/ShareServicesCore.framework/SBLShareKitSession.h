//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, NSProgress, NSString, NSWindow, SBLDownloadProvidersOperation, SBLFullfillProvidersOperation, SBLPrepareProvidersOperation, SBLReconnectProvidersOperation;
@protocol SBLShareKitManagerProgressDelegate, SBLShareKitManagerReconnectDelegate;

@interface SBLShareKitSession : NSObject
{
    BOOL _sessionAborted;
    NSWindow *_hostWindow;
    NSProgress *_sessionProgress;
    NSString *_sessionIdentifier;
    NSArray *_providers;
    id <SBLShareKitManagerReconnectDelegate> _reconnectDelegate;
    id <SBLShareKitManagerProgressDelegate> _progressDelegate;
    NSOperationQueue *_operationQueue;
    SBLPrepareProvidersOperation *_prepareOp;
    SBLReconnectProvidersOperation *_reconnectOp;
    SBLDownloadProvidersOperation *_downloadOp;
    SBLFullfillProvidersOperation *_fullfillOp;
}

+ (id)newSessionWithProviders:(id)arg1;
- (void).cxx_destruct;
@property(retain) SBLFullfillProvidersOperation *fullfillOp; // @synthesize fullfillOp=_fullfillOp;
@property(retain) SBLDownloadProvidersOperation *downloadOp; // @synthesize downloadOp=_downloadOp;
@property(retain) SBLReconnectProvidersOperation *reconnectOp; // @synthesize reconnectOp=_reconnectOp;
@property(retain) SBLPrepareProvidersOperation *prepareOp; // @synthesize prepareOp=_prepareOp;
@property BOOL sessionAborted; // @synthesize sessionAborted=_sessionAborted;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SBLShareKitManagerProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) __weak id <SBLShareKitManagerReconnectDelegate> reconnectDelegate; // @synthesize reconnectDelegate=_reconnectDelegate;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSProgress *sessionProgress; // @synthesize sessionProgress=_sessionProgress;
@property(retain, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopModalProgress;
- (void)cancelProgressRequest;
- (void)scheduleProgressWithOptions:(id)arg1;
- (void)startModalProgress:(id)arg1;
- (void)operationFinished;
- (void)sessionAbort;
- (void)sessionShutdown;
- (void)sessionBegin:(CDUnknownBlockType)arg1;
- (void)sessionPrepare;
- (void)dealloc;
- (id)init;

@end

