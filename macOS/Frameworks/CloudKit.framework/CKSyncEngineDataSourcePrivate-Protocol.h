//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSyncEngineDataSource-Protocol.h>

@class CKRecordZoneID, CKSyncEngine;

@protocol CKSyncEngineDataSourcePrivate <CKSyncEngineDataSource>

@optional
- (BOOL)syncEngine:(CKSyncEngine *)arg1 shouldFetchChangesForZoneID:(CKRecordZoneID *)arg2;
@end

