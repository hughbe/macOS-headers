//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

@class CalManagedCalDAVCalendar, CalManagedPrincipal, NSURL;

@interface CalManagedCalendarUserAddress : CalManagedObject
{
}

+ (id)_toCalDAVCalendarUserAddress:(id)arg1;
+ (id)preferredAddressURLforAddresses:(id)arg1;
+ (id)entityName;
- (id)enclosingSource;
@property long long preferred;
@property(retain) NSURL *address;
- (void)willRefresh:(BOOL)arg1;

// Remaining properties
@property(retain) CalManagedCalDAVCalendar *calendar; // @dynamic calendar;
@property(retain) CalManagedPrincipal *principal; // @dynamic principal;

@end

