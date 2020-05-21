//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol BrowserHistoryImporterDelegate <NSObject>
- (void)importerDidFailToImportHistory;
- (void)importerDidFinishImportingHistory;
- (void)importerDidImportHistoryRedirectFromVisitWithID:(unsigned long long)arg1 urlString:(NSString *)arg2 toVisitWithID:(unsigned long long)arg3 urlString:(NSString *)arg4 title:(NSString *)arg5 onDate:(NSDate *)arg6;
- (void)importerDidImportHistoryVisitWithID:(unsigned long long)arg1 urlString:(NSString *)arg2 title:(NSString *)arg3 onDate:(NSDate *)arg4;
@end

