//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo;

__attribute__((visibility("hidden")))
@interface _MNTrackedAlternateRoute : NSObject
{
    MNActiveRouteInfo *_alternateRoute;
    MNActiveRouteInfo *_mainRoute;
    CDStruct_3f2a7a20 _divergenceCoordinate;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_3f2a7a20 divergenceCoordinate; // @synthesize divergenceCoordinate=_divergenceCoordinate;
@property(retain, nonatomic) MNActiveRouteInfo *mainRoute; // @synthesize mainRoute=_mainRoute;
@property(retain, nonatomic) MNActiveRouteInfo *alternateRoute; // @synthesize alternateRoute=_alternateRoute;

@end

