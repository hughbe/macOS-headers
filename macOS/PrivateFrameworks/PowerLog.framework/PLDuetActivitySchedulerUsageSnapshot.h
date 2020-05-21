//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PLDuetActivitySchedulerUsageSnapshot : NSObject
{
    NSDate *_startDate;
    NSDate *_stopDate;
    double _numberOfBytesUploadedWiFi;
    double _numberOfBytesDownloadedWiFi;
    double _numberOfBytesUploadedCell;
    double _numberOfBytesDownloadedCell;
    NSString *_bundleID;
}

- (void).cxx_destruct;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property double numberOfBytesDownloadedCell; // @synthesize numberOfBytesDownloadedCell=_numberOfBytesDownloadedCell;
@property double numberOfBytesUploadedCell; // @synthesize numberOfBytesUploadedCell=_numberOfBytesUploadedCell;
@property double numberOfBytesDownloadedWiFi; // @synthesize numberOfBytesDownloadedWiFi=_numberOfBytesDownloadedWiFi;
@property double numberOfBytesUploadedWiFi; // @synthesize numberOfBytesUploadedWiFi=_numberOfBytesUploadedWiFi;
@property(retain) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;

@end

