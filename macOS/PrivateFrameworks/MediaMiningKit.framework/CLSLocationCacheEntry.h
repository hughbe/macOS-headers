//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface CLSLocationCacheEntry : NSManagedObject
{
}

+ (id)entityName;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(copy, nonatomic) NSString *addressDictionaryString; // @dynamic addressDictionaryString;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) unsigned long long muid; // @dynamic muid;
@property(retain, nonatomic) NSSet *placemarks; // @dynamic placemarks;
@property(copy, nonatomic) NSString *postalAddress; // @dynamic postalAddress;
@property(nonatomic) double updateTimestamp; // @dynamic updateTimestamp;

@end

