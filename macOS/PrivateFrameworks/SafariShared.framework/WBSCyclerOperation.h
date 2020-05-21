//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSCyclerOperation : NSObject
{
    unsigned long long _numberOfRemainingAttempts;
    float _backoffRatio;
    BOOL _finished;
    BOOL _executing;
    CDUnknownBlockType _block;
    double _nextBackoffTimeInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double nextBackoffTimeInterval; // @synthesize nextBackoffTimeInterval=_nextBackoffTimeInterval;
@property(readonly, nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(readonly, nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2;
- (id)init;

@end

