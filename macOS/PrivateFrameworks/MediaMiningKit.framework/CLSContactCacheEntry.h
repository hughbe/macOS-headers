//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface CLSContactCacheEntry : NSManagedObject
{
}

+ (id)entityName;
- (id)cachedContact;

// Remaining properties
@property(nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID; // @dynamic classifiedPersonLocalIdentifierWithFaceModelID;
@property(nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property(nonatomic) BOOL hasPicture; // @dynamic hasPicture;
@property(nonatomic) double updateTimestamp; // @dynamic updateTimestamp;

@end

