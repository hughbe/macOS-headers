//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalSyncClearifier : NSObject
{
}

+ (BOOL)clearRecords;
+ (BOOL)clearRecordsForEntitiesInDataClass:(id)arg1;
+ (void)_syncToClearRecordsForEntitiesInDataClass:(id)arg1 client:(id)arg2;
+ (void)unregisterClients;
- (id)init;

@end

