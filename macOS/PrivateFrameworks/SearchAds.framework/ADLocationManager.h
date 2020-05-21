//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchAds/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, CLPlacemark, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADLocationManager : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_locationQueue;
    BOOL _updatingPlacemark;
    BOOL _isLocationUpdating;
    BOOL _isLocationInitialized;
    int _callerStatus;
    CLPlacemark *_currentPlacemark;
    CLLocation *_lastPlacemarkLocation;
    NSMutableArray *_listeners;
    CLLocationManager *_locationManager;
    CLLocation *_actualLocation;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) int callerStatus; // @synthesize callerStatus=_callerStatus;
@property(retain, nonatomic) CLLocation *actualLocation; // @synthesize actualLocation=_actualLocation;
@property(nonatomic) BOOL isLocationInitialized; // @synthesize isLocationInitialized=_isLocationInitialized;
@property(nonatomic) BOOL isLocationUpdating; // @synthesize isLocationUpdating=_isLocationUpdating;
@property BOOL updatingPlacemark; // @synthesize updatingPlacemark=_updatingPlacemark;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) CLLocation *lastPlacemarkLocation; // @synthesize lastPlacemarkLocation=_lastPlacemarkLocation;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (BOOL)isLocationBasedAdsEnabled;
- (BOOL)locationEnabledFor:(int)arg1;
- (id)obfuscatedLocation;
- (id)currentLocation;
@property(retain) CLPlacemark *currentPlacemark; // @synthesize currentPlacemark=_currentPlacemark;
- (void)updatePlacemark;
- (void)stop;
- (void)start;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

