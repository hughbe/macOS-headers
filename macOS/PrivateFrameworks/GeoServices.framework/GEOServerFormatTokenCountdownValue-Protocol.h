//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSCoding-Protocol.h>
#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol GEOServerFormatTokenCountdownValue <NSObject, NSCoding>
@property(readonly, nonatomic) NSString *separator;
@property(readonly, nonatomic) NSDictionary *alternativeFormatStringsByType;
@property(readonly, nonatomic) NSArray *timestamps;
@property(readonly, nonatomic) long long countdownType;
@end

