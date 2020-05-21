//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SDSeedProgramManager : NSObject
{
}

+ (void)_createFeedbackAssistantSymlink;
+ (void)_setSeedOptOutUIDisabled:(BOOL)arg1;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)arg1;
+ (void)_clearSeedCatalog;
+ (BOOL)_setCatalogForSeedProgram:(long long)arg1;
+ (BOOL)_currentCatalogIsSeed;
+ (id)_loadSeedCatalogsFromPlist;
+ (void)_setSeedProgramPref:(long long)arg1;
+ (void)saveResponse:(id)arg1;
+ (id)serverDictionary;
+ (id)serverURL;
+ (id)_stringForSeedProgram:(long long)arg1;
+ (long long)_seedProgramForString:(id)arg1;
+ (BOOL)unenrollFromSeedProgram;
+ (BOOL)enrollInSeedProgram:(long long)arg1;
+ (BOOL)enrollInSeedProgram:(long long)arg1 deletingSystemURL:(BOOL)arg2;
+ (id)legalsForSeedProgram:(long long)arg1 withError:(id *)arg2;
+ (id)catalogForSeedProgram:(long long)arg1 withError:(id *)arg2;
+ (id)availableSeedPrograms;
+ (void)queryProgramsForDSIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)queryProgramsForAccounts:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (BOOL)isEnrolledInSeedProgram;
+ (long long)currentSeedProgram;

@end

