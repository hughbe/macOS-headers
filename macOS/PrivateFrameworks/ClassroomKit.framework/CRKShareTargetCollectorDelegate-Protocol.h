//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKShareTargetCollector, NSArray;

@protocol CRKShareTargetCollectorDelegate <NSObject>
- (void)shareTargetCollector:(CRKShareTargetCollector *)arg1 didRemoveTargets:(NSArray *)arg2;
- (void)shareTargetCollector:(CRKShareTargetCollector *)arg1 didFindTargets:(NSArray *)arg2;
@end

