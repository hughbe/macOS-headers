//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMMigrateUserToolBox : NSObject
{
}

+ (BOOL)migrateGuestAccountForRequest:(id)arg1 andDestination:(id)arg2;
+ (BOOL)migrateRootUserFrom:(id)arg1 toDestinationSystem:(id)arg2 error:(id *)arg3;
+ (BOOL)migrateGlimmerblockerUserFrom:(id)arg1 toDestinationSystem:(id)arg2;
+ (BOOL)migrateFinalCutProServerUserFrom:(id)arg1 toDestinationSystem:(id)arg2;
+ (void)migrateUserRoleAccountsFrom:(id)arg1 toDestinationSystem:(id)arg2;
+ (void)migrateExtraHiddenSystemUsersFrom:(id)arg1 toDestinationSystem:(id)arg2;
+ (BOOL)archiveUserDatabaseForDebuggingFromSourceSystem:(id)arg1 toDestinationSystem:(id)arg2;
+ (BOOL)migrateFileVaultMasterPasswordInfoFromSourceSystem:(id)arg1 toDestinationSystem:(id)arg2;
+ (BOOL)modifyACLs:(id)arg1 atPath:(id)arg2;
+ (void)applyUserTemplateToDirectory:(id)arg1 forUserWithName:(id)arg2 andID:(unsigned int)arg3;
+ (BOOL)removeDenyDeleteACLFromPath:(id)arg1;
+ (BOOL)addDenyDeleteACLToPath:(id)arg1;
+ (unsigned int)gidForEveryoneACL;
+ (BOOL)deleteConflictingUsers:(id)arg1 onSystem:(id)arg2;
+ (BOOL)convertLegacyFilevaultAccountForUserEntry:(id)arg1 onDestinationSystem:(id)arg2;
+ (BOOL)migrateUserEntry:(id)arg1 andGroup:(BOOL)arg2 inDB:(id)arg3 toDestinationSystem:(id)arg4 error:(id *)arg5;
+ (BOOL)tenaciousCreateUserRecord:(id)arg1 inDB:(id)arg2;
+ (BOOL)createUser:(id)arg1 andCorrespondingGroup:(id)arg2 inDB:(id)arg3 onDestinationSystem:(id)arg4 error:(id *)arg5;
+ (BOOL)recreateAdminUsersForSourceSystem:(id)arg1 andDestinationSystem:(id)arg2;
+ (BOOL)migrateUserCustomImages:(id)arg1 fromSourceSystem:(id)arg2 toDestinationSystem:(id)arg3;

@end

