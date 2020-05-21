//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSNewLocationInformant : CLSInformant
{
}

+ (BOOL)location:(struct CLLocationCoordinate2D)arg1 isFarFromLocation:(struct CLLocationCoordinate2D)arg2;
+ (BOOL)location:(struct CLLocationCoordinate2D)arg1 isCloseToLocation:(struct CLLocationCoordinate2D)arg2;
+ (id)natureCategories;
+ (id)regionOfInterestCategories;
+ (id)areaOfInterestCategories;
+ (BOOL)doesRegion:(id)arg1 containLocation:(id)arg2;
+ (BOOL)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2;
+ (struct CLLocationCoordinate2D)shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D)arg1;
+ (id)shiftedLocationFromOriginalLocation:(id)arg1;
+ (id)businessItemsForRegion:(id)arg1;
+ (id)createPlaceForBusinessItem:(id)arg1;
+ (id)_categoriesDescriptionFromCategories:(id)arg1;
+ (id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blacklistCategories:(id)arg4;
+ (id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D)arg1 forCategories:(id)arg2 precision:(double)arg3 inCache:(id)arg4;
+ (id)pointOfInterestCategories;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)familyIdentifier;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)locationRegionOfInterestCluesForInputClue:(id)arg1;
- (id)locationPointOfInterestCluesForInputClue:(id)arg1;
- (id)locationAreaOfInterestCluesForInputClue:(id)arg1;
- (id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(BOOL)arg6 precision:(double)arg7 cache:(id)arg8;
- (id)_regionOfInterestTraits;
- (id)_pointOfInterestTraits;
- (id)_regionOfInterestCategories;

@end

