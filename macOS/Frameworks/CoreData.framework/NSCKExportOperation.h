//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSCKExportMetadata, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKExportOperation : NSManagedObject
{
}

+ (id)entityPath;
@property(nonatomic) unsigned long long status;

// Remaining properties
@property(retain, nonatomic) NSCKExportMetadata *exportMetadata; // @dynamic exportMetadata;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *objects; // @dynamic objects;
@property(retain, nonatomic) NSNumber *statusNum; // @dynamic statusNum;

@end

