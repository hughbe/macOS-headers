//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MiroMemory;

__attribute__((visibility("hidden")))
@interface MiroPersistOperation : NSOperation
{
    BOOL _isFinished;
    BOOL _isExecuting;
    MiroMemory *_memory;
}

- (void).cxx_destruct;
@property(retain) MiroMemory *memory; // @synthesize memory=_memory;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;

@end

