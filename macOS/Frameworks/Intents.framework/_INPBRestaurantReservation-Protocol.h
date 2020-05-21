//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@protocol _INPBRestaurantReservation <NSObject>
@property(readonly, nonatomic) BOOL hasRestaurantLocation;
@property(retain, nonatomic) _INPBLocation *restaurantLocation;
@property(readonly, nonatomic) BOOL hasReservationDuration;
@property(retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property(readonly, nonatomic) BOOL hasReservation;
@property(retain, nonatomic) _INPBReservation *reservation;
@property(readonly, nonatomic) BOOL hasPartySize;
@property(retain, nonatomic) _INPBInteger *partySize;
@end

