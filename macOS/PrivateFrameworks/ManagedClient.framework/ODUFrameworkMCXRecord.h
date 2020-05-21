//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ODRecord;

__attribute__((visibility("hidden")))
@interface ODUFrameworkMCXRecord : NSObject
{
    ODRecord *mRecord;
    NSMutableDictionary *mOverride;
}

+ (id)mcxrecordWithOverride:(id)arg1;
+ (id)mcxrecordWithRecord:(id)arg1;
+ (id)mcxrecordWithRecord:(id)arg1 withOverride:(id)arg2;
- (BOOL)removeValuesForAttribute:(id)arg1;
- (BOOL)setValues:(id)arg1 forAttribute:(id)arg2;
- (id)valuesForAttribute:(id)arg1;
- (id)recordDetailsForAttributes:(id)arg1;
- (id)recordName;
- (id)recordType;
- (id)override;
- (id)record;
- (void)dealloc;
- (id)initWithRecord:(id)arg1 withOverride:(id)arg2;
- (id)cachedLocalUserGroups;
- (id)cachedParentGroups;
- (id)cachedParents;
- (id)cachedGroups;
- (id)mcxRecordArrayForXMLAttribute:(id)arg1;
- (id)cachedTrustInfoArray;
- (BOOL)isExternal;
- (BOOL)boolForAttribute:(id)arg1 withDefault:(BOOL)arg2;
- (BOOL)fromCache;
- (BOOL)isMobileComputerAccount;
- (BOOL)isMobileUserAccount;
- (BOOL)isMobileRecord;
- (id)picturePath;
- (double)mcxTimestamp;
- (id)timestampString;
- (id)originalHomeLoc;
- (BOOL)hasNetworkOriginalHome;
- (id)originalHome;
- (id)homeLoc;
- (BOOL)hasNetworkHome;
- (id)home;
- (id)mcxSettings;
- (BOOL)preventSimultaneousLogin;
- (BOOL)mcxBoolFlag:(id)arg1 withDefault:(BOOL)arg2;
- (id)mcxFlagsDictionary;
- (id)mcxFlags;
- (BOOL)rawIsLocal;
- (BOOL)isLocal;
- (id)nodeName;
- (id)originalNodeName;
- (id)rawNodeName;
- (id)uuidString;
- (id)rawUUIDString;
- (void)generateUUIDandSID;
- (unsigned int)uid;
- (id)uidString;
- (unsigned int)gid;
- (id)gidString;
- (id)bestName;
- (id)longName;
- (BOOL)isGroup;
- (BOOL)isGroupWithMCXSettingsFlag;
- (BOOL)isWorkgroup;
- (BOOL)isComputerGroup;
- (BOOL)isUserGroup;
- (BOOL)isComputerList;
- (BOOL)isComputer;
- (BOOL)isAdmin;
- (BOOL)rawIsAdmin;
- (BOOL)isUser;
- (BOOL)setMCXFlagsDictionary:(id)arg1;
- (BOOL)setValue:(id)arg1 forAttribute:(id)arg2;
- (id)firstValueForAttributeIfXMLDictionary:(id)arg1;
- (id)firstValueForAttributeIfXMLArray:(id)arg1;
- (id)firstValueForAttributeIfXMLPList:(id)arg1;
- (id)firstValueForAttributeAsData:(id)arg1;
- (id)firstValueForAttributeIfString:(id)arg1;
- (id)firstValueForAttribute:(id)arg1 withClass:(Class)arg2;
- (id)firstValueForAttribute:(id)arg1;
- (id)uniqueStringValuesForAttribute:(id)arg1;
- (id)dataValuesForAttribute:(id)arg1;
- (id)stringValuesForAttribute:(id)arg1;
- (id)recordDetailsForAttribute:(id)arg1;

@end

