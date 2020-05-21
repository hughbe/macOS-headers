//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TSUZipArchive.h>

@class TSUZipEntry;

__attribute__((visibility("hidden")))
@interface TSUContainedZipArchive : TSUZipArchive
{
    TSUZipArchive *_zipArchive;
    TSUZipEntry *_entry;
}

+ (id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)newArchiveReadChannel;
- (unsigned long long)archiveLength;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2;
- (id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2;
- (id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3;

@end

