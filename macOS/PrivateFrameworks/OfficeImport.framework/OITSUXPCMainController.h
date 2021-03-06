//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUXPCMainController : NSObject
{
    NSCountedSet *mConnectionHandlers;
    NSObject<OS_dispatch_queue> *mConnectionHandlersQueue;
    CDUnknownBlockType mConnectionHandlerBlock;
}

+ (id)sharedController;
- (void)p_removeConnectionHandler:(id)arg1;
- (void)p_addConnectionHandler:(id)arg1;
- (void)p_handleNewConnection:(id)arg1;
- (void)runWithConnectionHandlersReturnedByBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

