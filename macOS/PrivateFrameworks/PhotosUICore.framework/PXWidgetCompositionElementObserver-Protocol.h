//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXBasicTileAnimationOptions, PXTilingController, PXWidgetCompositionElement;

@protocol PXWidgetCompositionElementObserver <NSObject>
- (void)elementHasLoadedContentDataDidChange:(PXWidgetCompositionElement *)arg1;
- (void)elementNeedsLayout:(PXWidgetCompositionElement *)arg1 preferredAnimationOptions:(PXBasicTileAnimationOptions *)arg2 originatingTilingController:(PXTilingController *)arg3;
@end

