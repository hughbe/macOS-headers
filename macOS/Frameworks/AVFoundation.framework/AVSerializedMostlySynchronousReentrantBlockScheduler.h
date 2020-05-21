//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVBlockScheduler-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler>
{
    struct OpaqueFigSimpleMutex *_ivarAccessLock;
    NSArray *_blocks;
    struct OpaqueFigReentrantMutex *_blockSerializationLock;
}

+ (void)initialize;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

