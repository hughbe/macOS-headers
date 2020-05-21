//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSLock, NSMutableArray, NSPointerArray, RTTUtterance;
@protocol OS_dispatch_queue;

@interface RTTUIConversationControllerCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
    NSPointerArray *_conversationControllers;
    NSLock *_realtimeSendLock;
    NSIndexPath *_inProgressRealTimeIndexPath;
    RTTUtterance *_inProgressRealTimeUtterance;
    struct __CTServerConnection *_ctConnection;
    BOOL _processingUtteranceBuffer;
    NSMutableArray *_utteranceBuffer;
}

+ (id)coordinator;
- (void).cxx_destruct;
@property(nonatomic) BOOL processingUtteranceBuffer; // @synthesize processingUtteranceBuffer=_processingUtteranceBuffer;
@property(retain, nonatomic) NSMutableArray *utteranceBuffer; // @synthesize utteranceBuffer=_utteranceBuffer;
@property(readonly, nonatomic) RTTUtterance *inProgressRealTimeUtterance; // @synthesize inProgressRealTimeUtterance=_inProgressRealTimeUtterance;
@property(readonly, nonatomic) NSIndexPath *inProgressRealTimeIndexPath; // @synthesize inProgressRealTimeIndexPath=_inProgressRealTimeIndexPath;
- (void)processUtteranceQueue;
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 call:(id)arg4;
- (BOOL)realtimeTextDidChange:(id)arg1 forUtterance:(id)arg2 lastRowPath:(id)arg3;
- (void)sendNewUtteranceString:(id)arg1 controller:(id)arg2;
- (id)conversationControllers;
- (void)addConversationController:(id)arg1;
- (void)_updateCallActiveStatus:(BOOL)arg1;
- (id)init;

@end

