//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

#import <CloudKitDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface CKRecordID (CKPrequeliteBindings) <PQLValuable>
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

