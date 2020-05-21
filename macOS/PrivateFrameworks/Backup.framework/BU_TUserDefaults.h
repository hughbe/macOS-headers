//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

__attribute__((visibility("hidden")))
@interface BU_TUserDefaults : NSUserDefaults
{
    struct TNotificationCenterObserver _prefsNeedToBeSyncedObserver;
    struct TNotificationCenterObserver _showAllExtensionsObserver;
    struct TNotificationCenterObserver _forwardingDistributedObserver;
}

+ (_Bool)synchronize;
+ (void)sendKeyChangedNotification:(const struct TString *)arg1;
+ (void)sendRegIDChangedNotification:(int)arg1;
+ (void)setShowAllExtensions:(_Bool)arg1;
+ (_Bool)showAllExtensions;
+ (_Bool)showSystemFiles;
+ (void)toggleShowAllFilesWithoutWritingPref;
+ (void)setShowAllFiles:(_Bool)arg1;
+ (void)_setShowAllFiles:(_Bool)arg1;
+ (_Bool)showAllFiles;
+ (void)setDictionary:(id)arg1 forRegID:(int)arg2;
+ (id)dictionaryForRegID:(int)arg1;
+ (void)setArray:(id)arg1 forRegID:(int)arg2;
+ (id)arrayForRegID:(int)arg1;
+ (void)setString:(id)arg1 forRegID:(int)arg2;
+ (id)stringForRegID:(int)arg1;
+ (void)setRect:(const struct CGRect *)arg1 forRegID:(int)arg2;
+ (struct CGRect)rectForRegID:(int)arg1;
+ (void)setSize:(const struct CGSize *)arg1 forRegID:(int)arg2;
+ (struct CGSize)sizeForRegID:(int)arg1;
+ (void)setPoint:(const struct CGPoint *)arg1 forRegID:(int)arg2;
+ (struct CGPoint)pointForRegID:(int)arg1;
+ (void)setFourCharCode:(unsigned int)arg1 forRegID:(int)arg2;
+ (unsigned int)fourCharCodeForRegID:(int)arg1;
+ (void)setSInt64:(long long)arg1 forRegID:(int)arg2;
+ (long long)sint64ForRegID:(int)arg1;
+ (void)setInteger:(long long)arg1 forRegID:(int)arg2;
+ (long long)integerForRegID:(int)arg1;
+ (void)setDouble:(double)arg1 forRegID:(int)arg2;
+ (double)doubleForRegID:(int)arg1;
+ (void)setCGFloat:(double)arg1 forRegID:(int)arg2;
+ (double)cgFloatForRegID:(int)arg1;
+ (void)setFloat:(float)arg1 forRegID:(int)arg2;
+ (float)floatForRegID:(int)arg1;
+ (void)setBool:(_Bool)arg1 forRegID:(int)arg2;
+ (_Bool)boolForRegID:(int)arg1;
+ (_Bool)regIDExists:(int)arg1;
+ (void)removeObjectForRegID:(int)arg1;
+ (void)setObject:(id)arg1 forRegID:(int)arg2;
+ (id)objectForRegID:(int)arg1;
+ (void)resetUserDefaults;
+ (void)resetStandardUserDefaults;
+ (id)userDefaults;
+ (id)standardUserDefaults;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_boolForRegID:(int)arg1;
- (_Bool)regIDExists:(int)arg1;
- (void)removeObjectForRegID:(int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObjectIfDifferent:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forRegID:(int)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForRegID:(int)arg1;
- (id)objectForKey:(id)arg1;
- (void)_finderSetObject:(id)arg1 forKey:(id)arg2;
- (id)_finderObjectForKey:(id)arg1;
- (void)showAllExtensionsPrefsChangedByLaunchServices;
- (void)preferencesNeedToBeSynced;
- (id)init;

@end

