//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLDatabaseReader : NSObject
{
    struct sqlite3 *_dbConnection;
}

@property struct sqlite3 *dbConnection; // @synthesize dbConnection=_dbConnection;
- (id)stringValueOfTable:(id)arg1;
- (id)tableNamesFromDatabase;
- (id)performStatement:(struct sqlite3_stmt *)arg1;
- (id)prepareStatementAndPerformWithString:(id)arg1;
- (void)dealloc;
- (id)initWithDatabaseFile:(id)arg1;
- (struct sqlite3 *)openDatabaseFile:(id)arg1;

@end

