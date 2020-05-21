//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSArray, NSString, VKCameraController, VKOverlay;
@protocol VKInteractiveMapDelegate, VKNavigationCameraController;

@protocol VKInteractiveMap <NSObject>
+ (BOOL)supportsMapType:(int)arg1 scale:(int)arg2;
@property(readonly, nonatomic) NSArray *visibleTileSets;
@property(readonly, nonatomic) NSArray *overlays;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate;
- (float)currentRoadSignOffset;
- (void)setNavCameraIsDetached:(BOOL)arg1;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 cameraController:(VKCameraController<VKNavigationCameraController> *)arg5 pounceCompletionHandler:(void (^)(BOOL))arg6;
- (BOOL)isPointValidForGesturing:(struct CGPoint)arg1;
- (NSArray *)attributionsForCurrentRegion;
- (void)insertOverlay:(VKOverlay *)arg1 belowOverlay:(VKOverlay *)arg2;
- (void)insertOverlay:(VKOverlay *)arg1 aboveOverlay:(VKOverlay *)arg2;
- (void)removeOverlay:(VKOverlay *)arg1;
- (void)addOverlay:(VKOverlay *)arg1;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL (^)(struct))annotationCoordinateTest;
- (long long (^)(double, double, double, double))annotationRectTest;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)requestStylesheetMapDisplayStyle:(struct DisplayStyle)arg1 animated:(BOOL)arg2;
- (void)setMapType:(int)arg1 animated:(BOOL)arg2;
- (NSString *)consoleString:(BOOL)arg1;
- (NSString *)detailedDescription;
@end

