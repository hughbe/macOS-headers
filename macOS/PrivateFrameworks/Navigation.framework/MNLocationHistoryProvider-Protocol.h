//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class NSArray;
@protocol MNLocationHistoryProvider;

@protocol MNLocationHistoryProvider <NSObject>
+ (id <MNLocationHistoryProvider>)sharedLocationHistoryProvider;
- (NSArray *)locationHistory;
@end

