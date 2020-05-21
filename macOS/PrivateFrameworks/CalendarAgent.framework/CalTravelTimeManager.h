//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalTravelTimeManager : NSObject
{
    BOOL _hasMapKitFramework;
}

+ (id)defaultManager;
- (void)_findCoordinatesForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (BOOL)loadMapKit;
- (id)init;

@end

