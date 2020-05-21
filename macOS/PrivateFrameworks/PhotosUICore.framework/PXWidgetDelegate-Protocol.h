//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, PXBasicTileAnimationOptions, PXExtendedTraitCollection, PXScrollViewController;
@protocol PXAnonymousView, PXAnonymousViewController, PXWidget;

@protocol PXWidgetDelegate <NSObject>
- (BOOL)widget:(id <PXWidget>)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
- (BOOL)widget:(id <PXWidget>)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 withTransitionType:(long long)arg3;
- (long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id <PXWidget>)arg1;
- (void)widgetInvalidateContentLayoutStyle:(id <PXWidget>)arg1;
- (void)widgetInvalidateContentViewAnchoringType:(id <PXWidget>)arg1;
- (void)widgetRequestFocus:(id <PXWidget>)arg1;
- (void)widgetHasLoadedContentDataDidChange:(id <PXWidget>)arg1;
- (void)widgetPreferredContentHeightForWidthDidChange:(id <PXWidget>)arg1;
- (void)widgetLocalizedDisclosureTitleDidChange:(id <PXWidget>)arg1;
- (void)widgetLocalizedCaptionDidChange:(id <PXWidget>)arg1;
- (void)widgetLocalizedSubtitleDidChange:(id <PXWidget>)arg1;
- (void)widgetLocalizedTitleDidChange:(id <PXWidget>)arg1;
- (void)widget:(id <PXWidget>)arg1 animateChanges:(void (^)(void))arg2 withAnimationOptions:(PXBasicTileAnimationOptions *)arg3;
- (PXExtendedTraitCollection *)widgetExtendedTraitCollection:(id <PXWidget>)arg1;
- (NSObject<PXAnonymousViewController> *)widgetViewControllerHostingWidget:(id <PXWidget>)arg1;
- (PXScrollViewController *)widgetScrollViewControllerHostingWidget:(id <PXWidget>)arg1;
- (NSObject<PXAnonymousView> *)widgetViewHostingGestureRecognizers:(id <PXWidget>)arg1;
@end

