//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ABCDRecord, NSData, NSString;

@interface ABCDUnknownProperty : NSManagedObject
{
}

+ (id)fetchUnknownPropertiesWithPropertyName:(id)arg1 managedObjectContext:(id)arg2 persistentStores:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSData *originalLine; // @dynamic originalLine;
@property(retain, nonatomic) ABCDRecord *owner; // @dynamic owner;
@property(retain, nonatomic) NSString *propertyName; // @dynamic propertyName;

@end

