//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, OS_os_transaction;

@interface SGXpcTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
    struct atomic_flag _done;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)transactionWithName:(const void *)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)doneReturningWasDone;
- (void)done;
- (void)setTimeout:(double)arg1;
- (id)initWithName:(const void *)arg1;
- (id)init;

@end

