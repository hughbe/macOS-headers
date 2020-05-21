//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

#import <CalendarPersistence/EKProtocolSharee-Protocol.h>

@class CalManagedCalDAVCalendar, NSDictionary, NSManagedObjectID, NSString, NSURL;

@interface CalManagedSharee : CalManagedObject <EKProtocolSharee>
{
}

+ (id)arrayOfShareesWithAddresses:(id)arg1 inCalendar:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)entityName;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)enclosingSource;
- (id)calDAVCalendarServerUserItem;
- (int)calDAVCalendarServerAccessLevel;
- (int)calDAVCalendarServerInviteStatus;
- (void)willSave;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain) NSString *accessLevel; // @dynamic accessLevel;
@property(retain) NSString *address; // @dynamic address;
@property(retain) CalManagedCalDAVCalendar *calendar; // @dynamic calendar;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(retain) NSString *commonName; // @dynamic commonName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(retain) NSString *status; // @dynamic status;
@property(readonly) Class superclass;

@end

