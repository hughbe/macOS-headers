//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBClientInheritanceManager, RBSInheritanceChangeSet;

@protocol RBClientInheritanceManagerDelegate <NSObject>
- (void)inheritanceManager:(RBClientInheritanceManager *)arg1 didChangeInheritances:(RBSInheritanceChangeSet *)arg2 completion:(void (^)(void))arg3;
@end

