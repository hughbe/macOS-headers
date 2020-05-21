//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray;
@protocol PLVideoResource;

@protocol PLVideoResourceContext <NSObject>
- (void)repairResource:(id <PLVideoResource>)arg1;
- (BOOL)validateResource:(id <PLVideoResource>)arg1;
- (id <PLVideoResource>)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (NSArray *)videoResourcesMatchingVersions:(NSArray *)arg1;
- (double)sizeThresholdForHighQuality;
@end

