//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKDownload, PKPackageReference;

@interface PKDownloaderQueueElement : NSObject
{
    PKPackageReference *_packageRef;
    NSString *_destination;
    PKDownload *_download;
    unsigned long long _downloadedBytes;
    unsigned long long _checksummedBytes;
    unsigned long long _progressIncrement;
}

- (unsigned long long)_getAndClearProgressIncrement;
- (unsigned long long)_reportedProgress;
- (void)_addToChecksummedBytes:(unsigned long long)arg1;
- (unsigned long long)checksummedBytes;
- (void)_addToDownloadedBytes:(unsigned long long)arg1;
- (unsigned long long)downloadedBytes;
- (void)_resetProgress;
- (void)setDownload:(id)arg1;
- (id)download;
- (id)resumeDataPath;
- (id)partialPath;
- (id)destination;
- (id)packageReference;
- (id)description;
- (void)dealloc;
- (id)initWithPackageReference:(id)arg1 destination:(id)arg2;

@end

