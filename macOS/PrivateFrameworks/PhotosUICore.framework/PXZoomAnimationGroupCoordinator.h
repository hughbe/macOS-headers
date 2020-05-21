//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class NSArray;

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator
{
    NSArray *_zoomAnimationCoordinators;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *zoomAnimationCoordinators; // @synthesize zoomAnimationCoordinators=_zoomAnimationCoordinators;
- (void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (id)initWithZoomAnimationCoordinators:(id)arg1;
- (id)init;

@end

