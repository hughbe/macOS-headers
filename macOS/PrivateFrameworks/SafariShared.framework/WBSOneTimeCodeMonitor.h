//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMOneTimeCodeAccelerator, NSArray, NSHashTable;
@protocol OS_dispatch_queue;

@interface WBSOneTimeCodeMonitor : NSObject
{
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSArray *_codes;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)consumeCode:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *codes;
- (id)init;

@end

