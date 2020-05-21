//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface MBAssetLoader : NSObject
{
    unsigned long long _maxConcurrentOperationCount;
    NSArray *_prefetchKeys;
    NSOperationQueue *_operationQueue;
    NSRecursiveLock *_queuedOperationsLock;
    NSMutableArray *_queuedOperations;
}

+ (id)sharedLoader;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *queuedOperations; // @synthesize queuedOperations=_queuedOperations;
@property(retain, nonatomic) NSRecursiveLock *queuedOperationsLock; // @synthesize queuedOperationsLock=_queuedOperationsLock;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSArray *prefetchKeys; // @synthesize prefetchKeys=_prefetchKeys;
@property unsigned long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
- (void)_loadAssetsFromURLs:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadAssetsFromURLs:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resumeOperationQueue:(id)arg1;
- (void)suspendOperationQueue:(id)arg1;
- (id)init;

@end

