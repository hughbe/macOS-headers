//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBLocalZoneQueryResult.h>

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultRecordColumns : HMBLocalZoneQueryResult
{
}

- (id)fetchRow:(id)arg1 error:(id *)arg2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(char *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;

@end

