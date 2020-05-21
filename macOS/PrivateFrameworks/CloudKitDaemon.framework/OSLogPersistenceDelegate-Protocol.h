//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class NSArray, NSDate, NSError, OSLogPersistence;

@protocol OSLogPersistenceDelegate <NSObject>
- (void)persistenceDidFinishReadingForStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (BOOL)persistence:(OSLogPersistence *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
@end

