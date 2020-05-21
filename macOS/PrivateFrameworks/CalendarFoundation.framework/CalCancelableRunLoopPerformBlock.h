//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCancelable-Protocol.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable>
{
    NSRunLoop *_runLoop;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)performAfterDelay:(double)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 inRunLoop:(id)arg2;

@end

