//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAWeatherAirQualityObject, SAWeatherCurrentConditions, SAWeatherLocation, SAWeatherUnits;

@interface SAWeatherAbstractObject : SADomainObject
{
}

+ (id)abstractObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractObject;
@property(copy, nonatomic) NSString *weatherRequest;
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;
@property(retain, nonatomic) SAWeatherUnits *units;
@property(copy, nonatomic) NSArray *hourlyForecasts;
@property(copy, nonatomic) NSString *extendedForecastUrl;
@property(copy, nonatomic) NSArray *dailyForecasts;
@property(retain, nonatomic) SAWeatherCurrentConditions *currentConditions;
@property(retain, nonatomic) SAWeatherAirQualityObject *airQuality;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

