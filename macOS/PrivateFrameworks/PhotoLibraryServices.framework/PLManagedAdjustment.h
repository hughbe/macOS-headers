//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/_PLManagedAdjustment.h>

@class NSDictionary, NSNumber, NSString, PLManagedAsset;

@interface PLManagedAdjustment : _PLManagedAdjustment
{
}

+ (void)fixupAssetSizeFromAdjustments:(id)arg1;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2 withOriginalImageSize:(struct CGSize)arg3 effectFilterCount:(unsigned long long *)arg4;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2 effectFilterCount:(unsigned long long *)arg3;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2;
+ (void)convertStraightenAngle:(double)arg1 andCropRect:(struct CGRect)arg2 toAffineTransform:(struct CGAffineTransform *)arg3 andCropRect:(struct CGRect *)arg4;
+ (void)convertAffineTransform:(struct CGAffineTransform)arg1 andCropRect:(struct CGRect)arg2 toStraightenAngle:(double *)arg3 andCropRect:(struct CGRect *)arg4;
+ (struct CGRect)convertCropRect:(struct CGRect)arg1 fromImageSize:(struct CGSize)arg2 toImageSize:(struct CGSize)arg3;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)entityName;
- (id)metadataProperties;
@property(nonatomic) int adjustmentType;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(copy, nonatomic) NSString *filterName; // @dynamic filterName;
@property(copy, nonatomic) NSDictionary *filterSettings; // @dynamic filterSettings;
@property(copy, nonatomic) NSNumber *identifier; // @dynamic identifier;

@end

