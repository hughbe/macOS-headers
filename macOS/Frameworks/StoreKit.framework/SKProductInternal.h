//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString, SKProductDiscount, SKProductSubscriptionPeriod;

__attribute__((visibility("hidden")))
@interface SKProductInternal : NSObject
{
    NSString *_contentVersion;
    BOOL _downloadable;
    NSArray *_downloadContentLengths;
    SKProductDiscount *_introductoryPrice;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
    NSString *_subscriptionGroupIdentifier;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    NSArray *_discounts;
}

- (void).cxx_destruct;

@end

