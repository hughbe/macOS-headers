//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INRestaurant, INRestaurantGuest, INRestaurantOffer, NSDateComponents, NSString;

@protocol INBookRestaurantReservationIntentExport <NSObject, JSExport>
@property(copy) NSString *guestProvidedSpecialRequestText;
@property(copy) INRestaurantOffer *selectedOffer;
@property(copy) INRestaurantGuest *guest;
@property(copy) NSString *bookingIdentifier;
@property unsigned long long partySize;
@property(copy) NSDateComponents *bookingDateComponents;
@property(copy) INRestaurant *restaurant;
- (id)init;
@end

