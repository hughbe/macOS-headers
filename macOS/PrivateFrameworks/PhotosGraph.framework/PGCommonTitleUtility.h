//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGCommonTitleUtility : NSObject
{
}

+ (unsigned long long)dimensionForLabel:(id)arg1;
+ (id)_locationLabelForDimension:(unsigned long long)arg1;
+ (id)_closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(CDUnknownBlockType)arg3 reverse:(BOOL)arg4;
+ (id)titleWithLineBreakForTitle:(id)arg1;
+ (id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2;
+ (id)titleWithNoLineBreakSpaceForTitle:(id)arg1 andUsedNames:(id)arg2;
+ (struct _NSRange)_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(struct _NSRange)arg2 searchForward:(BOOL)arg3;
+ (void)startAndEndDateNodeFromDateNodes:(id)arg1 startDateNode:(id *)arg2 endDateNode:(id *)arg3;
+ (id)bestAddressNodeForMomentNodes:(id)arg1;
+ (id)dateNodesFromMomentNodes:(id)arg1;
+ (id)holidayNameForDateNodes:(id)arg1;
+ (BOOL)containsCelebrationForDateNodes:(id)arg1 holidayName:(id *)arg2;
+ (id)locationNodeWithDimension:(unsigned long long)arg1 rootNode:(id)arg2;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 reverse:(BOOL)arg3;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)locationIsInSupersetCategoryForLocationNode:(id)arg1;
+ (BOOL)locationIsInSupersetCategoryForAddressNode:(id)arg1 dimension:(unsigned long long)arg2;
+ (BOOL)isLargeCountryForAddressNode:(id)arg1;
+ (id)addressNodesFromMomentNodes:(id)arg1;

@end

