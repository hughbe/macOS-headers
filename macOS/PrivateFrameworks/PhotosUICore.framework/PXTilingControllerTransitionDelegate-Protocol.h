//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingChange, PXTilingController;
@protocol PXTileIdentifierConverter, PXTileTransitionAnimationCoordinator;

@protocol PXTilingControllerTransitionDelegate <NSObject>

@optional
- (id <PXTileTransitionAnimationCoordinator>)tilingController:(PXTilingController *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;
- (id <PXTileIdentifierConverter>)tilingController:(PXTilingController *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (void)tilingController:(PXTilingController *)arg1 prepareForChange:(PXTilingChange *)arg2;
@end

