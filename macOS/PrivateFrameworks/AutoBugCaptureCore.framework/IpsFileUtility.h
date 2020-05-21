//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface IpsFileUtility : NSObject
{
}

+ (id)formattedDateForFilename:(id)arg1;
+ (id)_createIpsFileNameWithPrefix:(id)arg1 date:(id)arg2 inDirectory:(id)arg3;
+ (id)_createDataForCrashReporterIpsHeaderWithBugType:(id)arg1 contentType:(id)arg2 date:(id)arg3 additionalFields:(id)arg4;
- (BOOL)_checkDirectoryAndCreateIfNecessary:(id)arg1;
- (BOOL)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6;
- (BOOL)_writeIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6;
- (BOOL)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsContent:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6;
- (void)dealloc;

@end

