//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VNClusteringLogger : NSObject
{
    BOOL _logEnabled;
    NSURL *_logFolderURL;
    NSURL *_logFileURL;
    NSString *_fileNameBase;
}

+ (id)currentDateTime;
+ (id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2;
+ (void)appendString:(id)arg1 toLogFile:(id)arg2;
+ (BOOL)isLogEnabled;
- (void).cxx_destruct;
@property(readonly) NSString *fileNameBase; // @synthesize fileNameBase=_fileNameBase;
@property(readonly) BOOL logEnabled; // @synthesize logEnabled=_logEnabled;
@property(readonly) NSURL *logFileURL; // @synthesize logFileURL=_logFileURL;
@property(readonly) NSURL *logFolderURL; // @synthesize logFolderURL=_logFolderURL;
- (void)logClusterLookupMapL1:(const map_ad20a682 *)arg1;
- (void)logClusterMapL1:(const map_ad20a682 *)arg1;
- (void)logClusterLookupMapL0:(const map_ad20a682 *)arg1;
- (void)logClusterMapL0:(const map_ad20a682 *)arg1;
- (void)logClusterMap:(const map_ad20a682 *)arg1 level:(id)arg2;
- (void)logString:(id)arg1;
- (void)resetFileNameURLWithCurentDateTime;
- (id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2;
- (id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 logFileNameBase:(id)arg3;

@end

