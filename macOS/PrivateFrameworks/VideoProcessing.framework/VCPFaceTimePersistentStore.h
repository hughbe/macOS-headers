//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer;

@interface VCPFaceTimePersistentStore : NSObject
{
    NSPersistentContainer *_persistentContainer;
    NSManagedObjectContext *_backgroundContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)storeFaceTimeSession:(id)arg1;
- (id)fetchAllFaceTimeSessions;
- (id)init;

@end

