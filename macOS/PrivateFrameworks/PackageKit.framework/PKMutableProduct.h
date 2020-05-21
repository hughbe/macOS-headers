//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PackageKit/PKProduct.h>

@interface PKMutableProduct : PKProduct
{
}

- (BOOL)commitReturningError:(id *)arg1;
- (BOOL)writeToArchive:(id)arg1 error:(id *)arg2;
- (BOOL)writeProduct;
- (BOOL)unregisterPackageReference:(id)arg1 deletePackage:(BOOL)arg2;
- (BOOL)registerPackageReference:(id)arg1;
- (id)suggestedPackagePathFromPackageReference:(id)arg1;
- (BOOL)addResourceDataAtPath:(id)arg1;
- (BOOL)setDistributionFromContainer:(id)arg1;
- (BOOL)setDistribution:(id)arg1;
- (void)setProductIdentifier:(id)arg1 version:(id)arg2;
- (id)initForWritingToArchive:(id)arg1 ofType:(id)arg2 signingDelegate:(id)arg3 error:(id *)arg4;
- (id)initForWritingToArchive:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_setDistributionFlatData:(id)arg1;
- (BOOL)_setDistributionArchiveFromPath:(id)arg1;
- (id)_initForWritingAtPath:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)_setInstallerPluginsPath:(id)arg1;
- (void)_setScriptsPath:(id)arg1;

@end

