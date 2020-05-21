//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NEAppInfoCache : NSObject
{
    CDUnknownBlockType _customLookupHandler;
    NSMutableDictionary *_cachedSourceAppInfo;
}

+ (id)sharedAppInfoCache;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *cachedSourceAppInfo; // @synthesize cachedSourceAppInfo=_cachedSourceAppInfo;
@property(copy, nonatomic) CDUnknownBlockType customLookupHandler; // @synthesize customLookupHandler=_customLookupHandler;
- (id)bundleIDWithoutTeamID:(id)arg1;
- (id)lookupAppInfoForPid:(int)arg1 bundleID:(id)arg2;
- (void)performCustomLookupIfNecessaryForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)bundleID:(id)arg1 matchesBundleID:(id)arg2;
- (BOOL)appInfo:(id)arg1 mismatchedWithUUID:(id)arg2 andBundleID:(id)arg3;
- (BOOL)appInfo:(id)arg1 shouldOverwriteAppInfo:(id)arg2;
- (BOOL)setAppInfo:(id)arg1 forUUID:(id)arg2;
- (void)addAppInfoToCache:(id)arg1;
- (void)appInfoForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

