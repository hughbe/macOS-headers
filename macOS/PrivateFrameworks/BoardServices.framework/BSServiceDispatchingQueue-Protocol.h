//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@protocol BSServiceDispatchingQueue <NSObject>
- (void)performAsync:(void (^)(void))arg1 withHandoff:(NSObject<OS_xpc_object> *)arg2;
- (void)performAsync:(void (^)(void))arg1;
- (NSObject<OS_dispatch_queue> *)backingQueueIfExists;
- (void)assertOnQueue;
@end

