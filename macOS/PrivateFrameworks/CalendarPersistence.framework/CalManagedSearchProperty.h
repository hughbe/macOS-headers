//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

@class CalManagedCalDAVPrincipal, NSString;

@interface CalManagedSearchProperty : CalManagedObject
{
}

+ (id)entityName;
@property(readonly, retain, nonatomic) NSString *CDVStringWithNameSpace;

// Remaining properties
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *namespace; // @dynamic namespace;
@property(retain, nonatomic) CalManagedCalDAVPrincipal *principal; // @dynamic principal;

@end

