//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface RBMeteredMessageQueue : NSObject
{
    NSMutableDictionary *_pendingMessagesByIdentifier;
    BOOL _isProcessingPendingMessages;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    CDUnknownBlockType _messageSendBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType messageSendBlock; // @synthesize messageSendBlock=_messageSendBlock;
- (void)_lockQueue_processPendingMessages;
- (BOOL)containsMessageWithIdentifier:(id)arg1;
- (void)enqueueIdentifier:(id)arg1 message:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

