//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXCall;
@protocol CXCallObserverDataSource;

@protocol CXCallObserverDataSourceDelegate <NSObject>
- (void)dataSource:(id <CXCallObserverDataSource>)arg1 callChanged:(CXCall *)arg2;
@end

