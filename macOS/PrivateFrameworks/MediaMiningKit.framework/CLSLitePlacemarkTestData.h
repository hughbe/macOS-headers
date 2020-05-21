//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLCircularRegion, CLLocation, NSArray, NSString;

@interface CLSLitePlacemarkTestData : NSObject
{
    BOOL _isIsland;
    CLCircularRegion *_region;
    CLLocation *_location;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_subLocality;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_ISOcountryCode;
    NSString *_inlandWater;
    NSString *_ocean;
    NSArray *_areasOfInterest;
    NSString *_administrativeAreaCode;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isIsland; // @synthesize isIsland=_isIsland;
@property(retain, nonatomic) NSString *administrativeAreaCode; // @synthesize administrativeAreaCode=_administrativeAreaCode;
@property(retain, nonatomic) NSArray *areasOfInterest; // @synthesize areasOfInterest=_areasOfInterest;
@property(retain, nonatomic) NSString *ocean; // @synthesize ocean=_ocean;
@property(retain, nonatomic) NSString *inlandWater; // @synthesize inlandWater=_inlandWater;
@property(retain, nonatomic) NSString *ISOcountryCode; // @synthesize ISOcountryCode=_ISOcountryCode;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(retain, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLCircularRegion *region; // @synthesize region=_region;

@end

