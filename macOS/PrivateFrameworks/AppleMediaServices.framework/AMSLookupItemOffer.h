//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface AMSLookupItemOffer : NSObject
{
    NSDictionary *_lookupDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
@property(readonly, nonatomic) NSString *subscriptionType;
@property(readonly, nonatomic) NSNumber *price;
@property(readonly, nonatomic) NSString *offerType;
@property(readonly, nonatomic) NSString *formattedPrice;
@property(readonly, nonatomic) NSString *buyParameters;
- (id)actionTextForType:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;

@end

