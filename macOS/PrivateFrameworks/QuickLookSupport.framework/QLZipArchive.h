//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSFileWrapper, NSURL;

@interface QLZipArchive : NSObject
{
    struct archive *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)fileWrapper;
- (void)enumerateEntriesWithHandler:(CDUnknownBlockType)arg1;
- (id)readCurrentDataWithEntry:(struct archive_entry *)arg1 error:(id *)arg2;
- (BOOL)_reopenWithError:(id *)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)libarchiveError;

@end

