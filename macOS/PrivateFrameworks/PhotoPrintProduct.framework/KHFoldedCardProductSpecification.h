//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHProductSpecification.h>

@interface KHFoldedCardProductSpecification : KHProductSpecification
{
}

- (id)pageNameForLayoutAtIndex:(unsigned long long)arg1 inProject:(id)arg2;
- (id)defaultBackgroundTreatmentForLayout:(id)arg1 inProject:(id)arg2;
- (id)defaultBackgroundTreatmentForLayout:(id)arg1 inProject:(id)arg2 withSeedTreatment:(id)arg3;
- (void)generateEmptyLayoutsForProject:(id)arg1 withTheme:(id)arg2 params:(id)arg3;
- (BOOL)autoflowWouldExceedPageCount:(long long)arg1 withTheme:(id)arg2 andPhotoAnalyzer:(id)arg3;
- (void)performAutoflowForProject:(id)arg1 withTheme:(id)arg2 andPhotoAnalyzer:(id)arg3 params:(id)arg4;
- (void)ensureSectionsForProject:(id)arg1;
- (id)_linkedSectionsForSectionAtIndex:(unsigned long long)arg1;
- (id)printComponentsForProject:(id)arg1;
- (void)ensureComponentsForProject:(id)arg1;
- (struct CGSize)coverPageSize;

@end

