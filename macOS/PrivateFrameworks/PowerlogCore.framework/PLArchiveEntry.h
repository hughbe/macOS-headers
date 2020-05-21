//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLEntry.h>

@class NSDate, NSString;

@interface PLArchiveEntry : PLEntry
{
    BOOL _systemTimeOffsetModified;
    NSString *_crPath;
}

+ (id)storageQueue;
+ (id)entryKey;
+ (void)load;
- (void).cxx_destruct;
@property(readonly) BOOL systemTimeOffsetModified; // @synthesize systemTimeOffsetModified=_systemTimeOffsetModified;
@property(readonly, nonatomic) NSString *crPath; // @synthesize crPath=_crPath;
- (void)log;
@property(nonatomic) long long mainDBSizeAtStart;
@property(readonly, nonatomic) BOOL removed;
@property(retain, nonatomic) NSDate *removedDate;
@property(readonly, nonatomic) BOOL syncedOff;
@property(retain, nonatomic) NSDate *syncedOffDate;
@property(nonatomic) unsigned long long numAttempts;
@property(nonatomic) long long stage;
@property(readonly) BOOL fullMode;
@property(nonatomic) double systemTimeOffset;
@property(readonly) NSString *uuid;
@property(readonly) NSDate *endDate;
@property(readonly) NSDate *startDate;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *compressedPath;
@property(readonly, nonatomic) NSString *path;
- (id)initEntryWithRawData:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 andUUID:(id)arg3;

@end

