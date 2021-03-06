//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject
{
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)openXPCTransactionStatus;
+ (void)_stopTrackingTransaction:(id)arg1;
+ (void)_startTrackingTransaction:(id)arg1;
+ (id)transaction:(const char *)arg1;
+ (void)discardCallStackSymbols:(id)arg1;
+ (id)callStackSymbols;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_statusDescription;
- (id)description;
- (void)stillAlive;
- (void)dealloc;
- (id)initWithIdentifier:(const char *)arg1;

@end

