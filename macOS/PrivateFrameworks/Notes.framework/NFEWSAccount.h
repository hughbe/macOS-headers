//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NFAccount.h>

@class NFEWSFolder, NSString, NSURL;

@interface NFEWSAccount : NFAccount
{
}

+ (id)createAccountWithEmailAddress:(id)arg1 context:(id)arg2;
+ (id)accountWithUsername:(id)arg1 internalURL:(id)arg2 context:(id)arg3;
+ (id)accountWithRootFolderID:(id)arg1 context:(id)arg2;
+ (id)accountWithEmailAddress:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) NSURL *lastUsedAutodiscoverURL; // @dynamic lastUsedAutodiscoverURL;
@property(retain, nonatomic) NSURL *externalURL; // @dynamic externalURL;
@property(retain, nonatomic) NSURL *internalURL; // @dynamic internalURL;
- (id)folderEntityName;
- (BOOL)participatesInInternetAccounts;
- (long long)accountClassPriority;
- (id)createDefaultFolderInContext:(id)arg1;
@property(readonly, nonatomic) __weak NFEWSFolder *defaultFolder;
- (BOOL)validateRootFolder:(inout id *)arg1 error:(out id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *folderHierarchySyncState; // @dynamic folderHierarchySyncState;
@property(retain, nonatomic) NFEWSFolder *rootFolder; // @dynamic rootFolder;

@end

