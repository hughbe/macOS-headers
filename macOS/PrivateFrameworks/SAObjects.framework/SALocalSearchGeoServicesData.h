//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSString;

@interface SALocalSearchGeoServicesData : SADomainObject
{
}

+ (id)geoServicesDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoServicesData;
@property(copy, nonatomic) NSString *environment;
@property(copy, nonatomic) NSData *clientMetadata;
@property(copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

