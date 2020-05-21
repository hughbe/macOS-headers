//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class NSString;

@interface EMFeaturePreferences : NSObject <EFLoggable>
{
}

+ (BOOL)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2;
+ (void)_setUserDefaultEnabled:(BOOL)arg1 forKey:(id)arg2;
+ (BOOL)_userDefaultEnabledForKey:(id)arg1 defaultValue:(BOOL)arg2;
+ (id)defaultForFeature:(unsigned long long)arg1;
+ (void)setFeature:(unsigned long long)arg1 enabled:(BOOL)arg2;
+ (BOOL)_featureEnabled:(unsigned long long)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)_registerForDefaultChanges;
+ (BOOL)featureEnabled:(unsigned long long)arg1;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

