//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCXPlugInKitManagement : NSObject
{
}

+ (id)buildSettingsFromPayloads:(id)arg1;
+ (id)settingsKeys;
+ (id)managementChangedNotificationName;
+ (id)settingsDomain;
+ (id)localizedNameForExtensionID:(id)arg1;
+ (id)publicExtensionPoints;
+ (BOOL)allowUseOfPlugIn:(id)arg1 byPid:(int)arg2 flags:(unsigned long long)arg3;
+ (id)getEffectiveSettings;

@end

