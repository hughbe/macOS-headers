//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNCommuteSession, NSArray;

@protocol MNCommuteSessionObserver <NSObject>
- (void)commuteSession:(MNCommuteSession *)arg1 didUpdateDestinations:(NSArray *)arg2;

@optional
- (void)commuteSessionDidArrive:(MNCommuteSession *)arg1;
- (void)commuteSession:(MNCommuteSession *)arg1 didChangeToState:(unsigned long long)arg2;
@end

