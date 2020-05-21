//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet
{
}

+ (id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapItemSnippet;
@property(copy, nonatomic) NSNumber *userCurrentLocation;
@property(retain, nonatomic) SALocation *searchRegionCenter;
@property(nonatomic) BOOL searchAlongRoute;
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property(copy, nonatomic) NSArray *providerCommand;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic) BOOL chainResultSet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

