//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsML/NSObject-Protocol.h>

@class NSArray, NSDictionary, _PASSqliteDatabase;

@protocol _PASDatabaseMigrationProtocol <NSObject>
- (NSArray *)queriesToSkipFromEmptyToVersion:(unsigned int *)arg1;
- (NSDictionary *)migrations;
- (_PASSqliteDatabase *)databaseHandle;
@end

