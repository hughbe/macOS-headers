//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSArray, NSString, NSURL;

@interface _AMMailAccount : SBObject
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property BOOL usesSsl;
@property BOOL moveDeletedMessagesToTrash;
@property BOOL includeWhenGettingNewMail;
@property(copy) NSString *serverName;
@property long long port;
@property(readonly, copy) NSURL *accountDirectory;
@property(copy) NSString *userName;
@property BOOL enabled;
@property BOOL emptyTrashOnQuit;
@property BOOL emptySentMessagesOnQuit;
@property BOOL emptyJunkMessagesOnQuit;
@property long long emptyTrashFrequency;
@property long long emptySentMessagesFrequency;
@property long long emptyJunkMessagesFrequency;
@property(copy) NSString *fullName;
@property(copy) NSArray *emailAddresses;
@property(readonly) int accountType;
@property int authentication;
@property(copy) NSString *password;
@property(copy) NSString *name;
@property(copy) id deliveryAccount;
- (id)mailboxes;

@end

