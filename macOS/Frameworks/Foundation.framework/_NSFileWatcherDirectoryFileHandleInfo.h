//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSFileWatcherFileHandleInfo.h>

__attribute__((visibility("hidden")))
@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo
{
    struct InodeDevPair inodeDevPair;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)close;
- (BOOL)isDirectory;

@end

