//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CallDBMetaInfo : NSObject
{
    NSURL *_dbInfoPrefFile;
}

- (void).cxx_destruct;
@property(retain) NSURL *dbInfoPrefFile; // @synthesize dbInfoPrefFile=_dbInfoPrefFile;
- (BOOL)validateInfo:(BOOL)arg1;
- (void)writeDatabaseVersion:(long long)arg1 isTemp:(BOOL)arg2;
- (long long)readDatabaseVersion:(BOOL)arg1;
- (id)initWithURL:(id)arg1;

@end

