//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CalAccumulatingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    CDUnknownBlockType _block;
    float _delay;
    BOOL _executionPending;
}

- (void).cxx_destruct;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1;
- (void)updateTags:(id)arg1 withContext:(id)arg2;
- (void)updateTags:(id)arg1;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2 delay:(float)arg3;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

