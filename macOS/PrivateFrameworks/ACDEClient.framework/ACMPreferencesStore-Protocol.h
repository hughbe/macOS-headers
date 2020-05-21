//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ACDEClient/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol ACMPreferencesStore <NSObject>
- (void)cleanupOnMemoryWarning;
- (void)clearCache;
- (void)savePreferencesIfNeeded;
- (void)removeAllValues;
- (void)removeAllValuesWithOptions:(long long)arg1;
- (void)replaceAllValues:(NSDictionary *)arg1 withOptions:(long long)arg2;
- (NSDictionary *)allValuesWithOptions:(long long)arg1;
- (void)setMultiplePreferencesValues:(NSDictionary *)arg1 withOptions:(long long)arg2;
- (NSDictionary *)multiplePreferencesValuesForKeys:(NSArray *)arg1 withOptions:(long long)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(NSString *)arg2 withOptions:(long long)arg3;
- (id)preferencesValueForKey:(NSString *)arg1 withOptions:(long long)arg2;
- (void)setMultiplePreferencesValues:(NSDictionary *)arg1;
- (NSDictionary *)multiplePreferencesValuesForKeys:(NSArray *)arg1;
- (void)setPreferencesValue:(id)arg1 forKey:(NSString *)arg2;
- (id)preferencesValueForKey:(NSString *)arg1;
@end

