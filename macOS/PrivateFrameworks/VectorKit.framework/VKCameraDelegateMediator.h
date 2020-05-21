//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKMapViewCameraDelegate-Protocol.h>

@class NSString;
@protocol VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate>
{
    id <VKMapViewCameraDelegate> _cameraDelegate;
    BOOL _isChangingMapType;
    unsigned long long _regionChangeCount;
}

@property(nonatomic) BOOL isChangingMapType; // @synthesize isChangingMapType=_isChangingMapType;
@property(nonatomic) id <VKMapViewCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(CDStruct_c3b9c2ee)arg1;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerCanZoomOutDidChange:(BOOL)arg1;
- (void)mapLayerCanZoomInDidChange:(BOOL)arg1;
- (void)mapLayerCanEnter3DModeDidChange:(BOOL)arg1;
- (void)mapLayerDidBecomePitched:(BOOL)arg1;
- (id)mapLayerPresentationForAnnotation:(id)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)arg1;
- (void)mapLayerWillChangeRegionAnimated:(BOOL)arg1;
- (void)mapLayerDidChangeVisibleRegion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

