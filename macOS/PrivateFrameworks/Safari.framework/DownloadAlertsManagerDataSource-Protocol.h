//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class DownloadAlertsManager, NSString;

@protocol DownloadAlertsManagerDataSource <NSObject>
- (NSString *)downloadFilenameInProgressForDownloadAlertsManager:(DownloadAlertsManager *)arg1;
- (unsigned long long)numberOfBusyEntriesForDownloadAlertsManager:(DownloadAlertsManager *)arg1;
@end

