//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class PHAJobCoalescer, PHAWorkerJob;

@protocol PHAJobCoalescerDelegate <NSObject>
- (void)jobCoalescer:(PHAJobCoalescer *)arg1 didProduceJob:(PHAWorkerJob *)arg2;
@end

