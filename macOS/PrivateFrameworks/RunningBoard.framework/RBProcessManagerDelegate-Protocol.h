//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSSet, RBProcess, RBProcessManager;

@protocol RBProcessManagerDelegate <NSObject>
- (void)processManager:(RBProcessManager *)arg1 didRemoveProcess:(RBProcess *)arg2;
- (void)processManager:(RBProcessManager *)arg1 didReconnectProcesses:(NSSet *)arg2;
- (void)processManager:(RBProcessManager *)arg1 didAddProcess:(RBProcess *)arg2;
@end

