//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INRideStatusExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INRideCompletionStatus, INRideDriver, INRideOption, INRideVehicle, NSArray, NSDate, NSString, NSUserActivity;

@interface INRideStatus : NSObject <INCacheableContainer, INImageProxyInjecting, INRideStatusExport, NSCopying, NSSecureCoding>
{
    NSArray *_waypoints;
    NSString *_rideIdentifier;
    long long _phase;
    INRideCompletionStatus *_completionStatus;
    INRideVehicle *_vehicle;
    INRideDriver *_driver;
    NSDate *_estimatedPickupDate;
    NSDate *_estimatedDropOffDate;
    NSDate *_estimatedPickupEndDate;
    INDateComponentsRange *_scheduledPickupTime;
    CLPlacemark *_pickupLocation;
    CLPlacemark *_dropOffLocation;
    INRideOption *_rideOption;
    NSUserActivity *_userActivityForCancelingInApplication;
    NSArray *_additionalActionActivities;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *additionalActionActivities; // @synthesize additionalActionActivities=_additionalActionActivities;
@property(retain) NSUserActivity *userActivityForCancelingInApplication; // @synthesize userActivityForCancelingInApplication=_userActivityForCancelingInApplication;
@property(copy) INRideOption *rideOption; // @synthesize rideOption=_rideOption;
@property(copy) CLPlacemark *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(copy) CLPlacemark *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(copy) INDateComponentsRange *scheduledPickupTime; // @synthesize scheduledPickupTime=_scheduledPickupTime;
@property(copy) NSDate *estimatedPickupEndDate; // @synthesize estimatedPickupEndDate=_estimatedPickupEndDate;
@property(copy) NSDate *estimatedDropOffDate; // @synthesize estimatedDropOffDate=_estimatedDropOffDate;
@property(copy) NSDate *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(copy) INRideDriver *driver; // @synthesize driver=_driver;
@property(copy) INRideVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(copy) INRideCompletionStatus *completionStatus; // @synthesize completionStatus=_completionStatus;
@property long long phase; // @synthesize phase=_phase;
@property(copy) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSArray *waypoints; // @synthesize waypoints=_waypoints;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

