//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol GEOServerFormattedString;

@protocol GEOTransitDeparture <NSObject>
@property(readonly, nonatomic) BOOL isCanceled;
@property(readonly, nonatomic) BOOL isPastDeparture;
@property(readonly, nonatomic) id <GEOServerFormattedString> liveStatusString;
@property(readonly, nonatomic) long long liveStatus;
@property(readonly, nonatomic) NSDate *liveDepartureDate;
@property(readonly, nonatomic) unsigned long long tripIdentifier;
@property(readonly, nonatomic) NSString *vehicleIdentifier;
@property(readonly, nonatomic) NSDate *scheduledDepartureDate;
@property(readonly, nonatomic) NSDate *departureDate;
- (BOOL)isPastDepartureRelativeToDate:(NSDate *)arg1 usingGracePeriod:(BOOL)arg2;
@end

