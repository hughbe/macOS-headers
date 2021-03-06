//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PEPServiceConfiguration : NSObject
{
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(BOOL)arg2;
- (BOOL)registerNetworkDefaultsForAppID:(id)arg1;
- (void)_updateDefaults:(id)arg1;
- (void)_postNotification;
- (void)dealloc;
- (id)init;

@end

