//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction, CXCallSource, CXTransactionGroup, CXTransactionManager;

@protocol CXTransactionManagerDelegate <NSObject>
- (void)transactionManager:(CXTransactionManager *)arg1 transactionGroupCompleted:(CXTransactionGroup *)arg2;
- (void)transactionManager:(CXTransactionManager *)arg1 actionTimedOut:(CXAction *)arg2 forCallSource:(CXCallSource *)arg3;
@end

