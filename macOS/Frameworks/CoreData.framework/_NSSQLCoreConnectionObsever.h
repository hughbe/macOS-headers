//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSQLCore;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NSSQLCoreConnectionObsever : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSSQLCore *_core;
}

- (void).cxx_destruct;
- (void)_purgeCaches:(id)arg1;
- (void)_clearBinding;
- (id)_retainedBinding;
- (void)_postRemoteChangeNotificationWithTransactionID:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSQLCore:(id)arg1;

@end

