//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBPriceRangeValue, _INPBRideFareLineItem, _INPBRidePartySizeOption, _INPBTimestamp, _INPBUserActivity;

@protocol _INPBRideOption <NSObject>
+ (Class)fareLineItemsType;
+ (Class)availablePartySizeOptionsType;
@property(nonatomic) BOOL hasUsesMeteredFare;
@property(nonatomic) BOOL usesMeteredFare;
@property(readonly, nonatomic) BOOL hasUserActivityForBookingInApplication;
@property(retain, nonatomic) _INPBUserActivity *userActivityForBookingInApplication;
@property(readonly, nonatomic) BOOL hasSubtitle;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) BOOL hasSpecialPricingBadgeImage;
@property(retain, nonatomic) _INPBImageValue *specialPricingBadgeImage;
@property(readonly, nonatomic) BOOL hasSpecialPricing;
@property(copy, nonatomic) NSString *specialPricing;
@property(readonly, nonatomic) BOOL hasPriceRange;
@property(retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property(readonly, nonatomic) BOOL hasName;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long fareLineItemsCount;
@property(copy, nonatomic) NSArray *fareLineItems;
@property(readonly, nonatomic) BOOL hasEstimatedPickupDate;
@property(retain, nonatomic) _INPBTimestamp *estimatedPickupDate;
@property(readonly, nonatomic) BOOL hasDisclaimerMessage;
@property(copy, nonatomic) NSString *disclaimerMessage;
@property(readonly, nonatomic) BOOL hasAvailablePartySizeOptionsSelectionPrompt;
@property(copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property(readonly, nonatomic) unsigned long long availablePartySizeOptionsCount;
@property(copy, nonatomic) NSArray *availablePartySizeOptions;
- (_INPBRideFareLineItem *)fareLineItemsAtIndex:(unsigned long long)arg1;
- (void)addFareLineItems:(_INPBRideFareLineItem *)arg1;
- (void)clearFareLineItems;
- (_INPBRidePartySizeOption *)availablePartySizeOptionsAtIndex:(unsigned long long)arg1;
- (void)addAvailablePartySizeOptions:(_INPBRidePartySizeOption *)arg1;
- (void)clearAvailablePartySizeOptions;
@end

