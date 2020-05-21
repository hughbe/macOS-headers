//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface RCAsyncBlockOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    CDUnknownBlockType _block;
}

+ (id)asyncBlockOperationWithMainThreadBlock:(CDUnknownBlockType)arg1;
+ (id)asyncBlockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

