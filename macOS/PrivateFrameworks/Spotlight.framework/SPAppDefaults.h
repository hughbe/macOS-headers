//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Spotlight/SPDefaults.h>

@interface SPAppDefaults : SPDefaults
{
}

+ (id)dockApps;
+ (id)localizedGroupName:(id)arg1;
+ (id)localizedGroupNameDictionary;
+ (id)topHitGroupPreferences;
+ (id)enabledGroupQueryString:(id)arg1;
+ (id)enabledGroupQueryFragment;
+ (id)enabledGroupIndexSet;
+ (void)resetEnabledGroupQueryFragment;
+ (void)resetEnabledGroupIndexSet;
+ (id)groupIdFromName:(id)arg1;
+ (id)nameFromGroupId:(unsigned long long)arg1;
+ (id)allGroupIndexSet;
+ (id)groupNameToGroupNumberDictionary;
+ (id)groupIdToNameDictionary;
+ (id)disabledGroups;
+ (void)resetDisabledGroups;
+ (BOOL)isAppleInternalInstall;
+ (void)initialize;
+ (id)defaultList;
- (void)reloadPrefs;

@end

