//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WiFiPolicy/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSSet;

@protocol TBFetchResponse <NSObject>
@property(readonly, nonatomic) NSSet *tiles;
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *results;

@optional
@property(readonly, nonatomic) NSDictionary *resultsByBSSID;
@end

