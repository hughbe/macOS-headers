//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ML3AccountCacheDatabase : NSObject
{
    NSMutableDictionary *_propertiesCache;
    NSObject<OS_dispatch_queue> *accessQueue;
    ML3MusicLibrary *_library;
}

- (void).cxx_destruct;
- (void)_setCacheEntry:(id)arg1 forDSID:(unsigned long long)arg2;
- (id)_cacheEntryForDSID:(unsigned long long)arg1;
- (BOOL)getPropertiesForDSID:(unsigned long long)arg1 appleID:(id *)arg2 altDSID:(id *)arg3;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (BOOL)setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3;
- (BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (id)initWithLibrary:(id)arg1;

@end

