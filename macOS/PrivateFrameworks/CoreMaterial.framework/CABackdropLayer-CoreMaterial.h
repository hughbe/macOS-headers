//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CABackdropLayer.h>

@interface CABackdropLayer (CoreMaterial)
+ (id)mt_orderedFilterTypesBlurAtEnd;
+ (id)mt_orderedFilterTypes;
+ (struct CAColorMatrix)mt_colorMatrixForOpacity:(double)arg1;
+ (id)mt_keyPathForColorMatrixDrivenOpacity;
- (void)_mt_setColorMatrix:(struct CAColorMatrix)arg1 withName:(id)arg2 filterOrder:(id)arg3 removingIfIdentity:(BOOL)arg4;
- (void)_mt_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 filterOrder:(id)arg4 removingIfIdentity:(BOOL)arg5;
- (void)_mt_removeFilterOfTypeIfNecessary:(id)arg1;
- (void)_mt_removeFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithFilterOrder:(id)arg2;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2 andFilterOrder:(id)arg3;
- (void)mt_setColorMatrixDrivenOpacity:(double)arg1 removingIfIdentity:(BOOL)arg2;
@property(readonly, nonatomic) double mt_colorMatrixDrivenOpacity;
- (void)mt_applyMaterialDescription:(id)arg1 removingIfIdentity:(BOOL)arg2;
@end

