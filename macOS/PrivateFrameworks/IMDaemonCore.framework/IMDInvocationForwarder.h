//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface IMDInvocationForwarder : NSObject
{
    NSMutableArray *_targets;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *_lock; // @synthesize _lock;
@property(retain, nonatomic) NSMutableArray *_targets; // @synthesize _targets;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)dealloc;
- (id)initWithTargets:(id)arg1;

@end

