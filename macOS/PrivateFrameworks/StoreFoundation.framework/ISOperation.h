//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ISServiceProxy, ISStoreAccount, ISStoreClient, NSError, NSLock, NSRunLoop, NSString, SSOperationProgress;
@protocol ISOperationDelegate;

@interface ISOperation : NSOperation
{
    NSError *_error;
    NSLock *_lock;
    NSRunLoop *_operationRunLoop;
    ISOperation *_parentOperation;
    SSOperationProgress *_progress;
    ISOperation *_subOperation;
    BOOL _success;
    void *_operationContext;
    ISServiceProxy *_serviceProxy;
    NSLock *_serviceProxyLock;
    ISStoreAccount *_storeAccount;
    NSLock *_storeAccountLock;
    id _xpcReplyObject;
    int _requiredBagType;
    id <ISOperationDelegate> _delegate;
    ISStoreClient *_storeClient;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property int requiredBagType; // @synthesize requiredBagType=_requiredBagType;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) ISStoreClient *storeClient; // @synthesize storeClient=_storeClient;
@property __weak id <ISOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id xpcReplyObject; // @synthesize xpcReplyObject=_xpcReplyObject;
@property void *operationContext; // @synthesize operationContext=_operationContext;
@property BOOL success; // @synthesize success=_success;
@property(retain) ISOperation *subOperation; // @synthesize subOperation=_subOperation;
@property(retain) ISOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain) NSRunLoop *operationRunLoop; // @synthesize operationRunLoop=_operationRunLoop;
@property(retain) NSError *error; // @synthesize error=_error;
- (id)urlForURLBagKey:(id)arg1 dsID:(id)arg2;
- (id)urlForURLBagKey:(id)arg1;
- (id)valueForURLBagKey:(id)arg1 dsID:(id)arg2;
- (id)valueForURLBagKey:(id)arg1;
- (BOOL)_loadRequredBagReturningError:(id *)arg1;
- (void)_sendSuccessToDelegate;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_main:(BOOL)arg1;
- (void)_failAfterException;
- (void)unlock;
- (void)sendProgressToDelegate;
- (void)run:(BOOL)arg1;
- (void)lock;
- (void)main;
- (void)cancel;
@property(readonly) NSString *uniqueKey;
- (void)stopRunLoop;
- (BOOL)runSubOperation:(id)arg1 returningError:(id *)arg2;
- (int)runRunLoopUntilStopped;
- (BOOL)runSyncReturningError:(id *)arg1;
- (void)run;
@property(readonly) double earlyTimeRemainingEstimate;
@property(readonly) long long progressWeight;
@property(readonly, nonatomic) SSOperationProgress *progress;
@property(retain, nonatomic) ISStoreAccount *storeAccount;
@property(readonly) ISServiceProxy *serviceProxy;
- (id)init;
- (id)initWithStoreClient:(id)arg1;
- (BOOL)showDialogInSeperateProcessForOperation:(id)arg1;

@end

