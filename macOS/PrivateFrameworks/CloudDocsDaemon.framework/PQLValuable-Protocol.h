//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/PQLBindable-Protocol.h>

@protocol PQLValuable <PQLBindable>

@optional
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
@end

