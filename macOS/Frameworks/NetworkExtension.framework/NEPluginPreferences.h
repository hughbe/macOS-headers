//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEPluginPreferences : NSObject
{
    struct __SCPreferences *_prefs;
    NSString *_pluginType;
}

+ (id)copyIdentifiersOfInstalledVPNApps;
+ (void)removePreferencesForPluginType:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property struct __SCPreferences *prefs; // @synthesize prefs=_prefs;
- (struct __CFDictionary *)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2;
- (BOOL)setPreferences:(struct __CFDictionary *)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3;
- (id)copyAppURL;
- (void)dealloc;
- (id)initWithPluginType:(id)arg1;

@end

