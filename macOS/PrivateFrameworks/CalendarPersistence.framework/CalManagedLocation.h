//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

#import <CalendarPersistence/EKProtocolStructuredLocation-Protocol.h>

@class CalManagedAlarm, CalManagedCalendarItem, CalManagedEvent, NSData, NSDictionary, NSManagedObjectID, NSNumber, NSString;

@interface CalManagedLocation : CalManagedObject <EKProtocolStructuredLocation>
{
}

+ (void)adjustStructuredLocation:(id)arg1 withNewLocation:(id)arg2 createdLocationHandler:(CDUnknownBlockType)arg3 managedObjectContext:(id)arg4;
+ (void)addLocationPrefetchToCalendarItemFetch:(id)arg1;
+ (id)entityName;
- (void)updateWithProtocolStructuredLocation:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *radiusNumber;
- (id)enclosingSource;
- (void)awakeFromInsert;
- (id)_ICSStructuredLocation;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (void)importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4;
- (void)_importiCalendarStructuredLocation:(id)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)setValuesFromData:(id)arg1;
- (id)dataString;
- (id)_calLocation;

// Remaining properties
@property(retain) NSString *abURLString; // @dynamic abURLString;
@property(retain) NSString *address; // @dynamic address;
@property(retain) CalManagedAlarm *alarm; // @dynamic alarm;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSString *displayName; // @dynamic displayName;
@property(retain) CalManagedEvent *eventForEndLocation; // @dynamic eventForEndLocation;
@property(retain) CalManagedEvent *eventForStartLocation; // @dynamic eventForStartLocation;
@property(retain) NSString *geoURLString; // @dynamic geoURLString;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(retain) CalManagedCalendarItem *itemForLocation; // @dynamic itemForLocation;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(retain) NSData *mapKitHandle; // @dynamic mapKitHandle;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property double radius; // @dynamic radius;
@property(retain) NSString *routeType; // @dynamic routeType;
@property(readonly) Class superclass;
@property(retain) NSString *title; // @dynamic title;
@property(retain) NSString *uuid; // @dynamic uuid;

@end

