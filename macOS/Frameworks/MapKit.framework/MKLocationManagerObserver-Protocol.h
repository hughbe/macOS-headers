//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKLocationManager, NSError;

@protocol MKLocationManagerObserver <NSObject>
- (void)locationManagerDidResumeLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(MKLocationManager *)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerDidReset:(MKLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MKLocationManager *)arg1 withError:(NSError *)arg2;
- (void)locationManagerUpdatedLocation:(MKLocationManager *)arg1;
@end

