//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject
{
    id <DADataclassLockWatcher> _waiter;
    long long _dataclasses;
    CDUnknownBlockType _completionHandler;
    int _waiterNum;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int waiterNum; // @synthesize waiterNum=_waiterNum;
@property(nonatomic) long long dataclasses; // @synthesize dataclasses=_dataclasses;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <DADataclassLockWatcher> waiter; // @synthesize waiter=_waiter;
- (id)description;
- (id)init;

@end

