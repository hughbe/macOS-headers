//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AMSBinaryPromise, NSError, NSLock, NSMutableSet;

@interface AMSOperation : NSOperation
{
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
    BOOL _success;
    AMSOperation *_parentOperation;
    AMSBinaryPromise *_promise;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL success; // @synthesize success=_success;
@property(readonly) AMSBinaryPromise *promise; // @synthesize promise=_promise;
@property __weak AMSOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
- (void)unlock;
- (void)lock;
- (void)runSubOperation:(id)arg1 onQueue:(id)arg2;
- (void)runSubOperation:(id)arg1;
- (void)run;
- (BOOL)isCancelled;
- (void)cancel;
- (void)main;
- (id)init;

@end

