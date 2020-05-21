//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <PhotosUICore/PXAnonymousViewController-Protocol.h>

@class NSString, PXExtendedTraitCollection;

@interface NSViewController (PXViewController) <PXAnonymousViewController>
+ (void)_px_prepareClassForExtendedTraitCollection;
@property(readonly, nonatomic) BOOL px_isVisible;
@property(readonly, nonatomic) struct CGSize px_referenceSize;
@property(readonly, nonatomic) struct NSEdgeInsets px_layoutMargins;
@property(readonly, nonatomic) struct NSEdgeInsets px_safeAreaInsets;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayout;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidAppear;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;
@property(readonly, nonatomic) PXExtendedTraitCollection *px_extendedTraitCollection;
- (void)px_enableExtendedTraitCollection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

