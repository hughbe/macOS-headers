//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AOSAccountCache : NSObject
{
    NSMutableDictionary *_dsidMappings;
    NSMutableDictionary *_accountDicts;
    NSMutableDictionary *_appleAccountLookups;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void)_changeNotificationReceived:(id)arg1;
- (void)clearCaches;
- (void)clearCachedAppleAccountInfo;
- (id)cachedAppleAccountInfoForAccount:(struct AOSAccount *)arg1;
- (void)cacheAppleAccountInfo:(id)arg1 forAccount:(struct AOSAccount *)arg2;
- (id)_dsidForAppleID:(id)arg1;
- (void)_setDSID:(id)arg1 forAppleID:(id)arg2;
- (id)infoForAccount:(struct AOSAccount *)arg1 withMaxAge:(double)arg2;
- (void)setInfo:(id)arg1 forAccount:(struct AOSAccount *)arg2;
- (void)dealloc;
- (id)init;

@end

