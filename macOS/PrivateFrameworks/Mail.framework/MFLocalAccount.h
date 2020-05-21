//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFMailAccount.h>

@class MFMailbox;

@interface MFLocalAccount : MFMailAccount
{
}

+ (id)csAccountTypeString;
+ (id)accountTypeString;
+ (id)outboxPathRelativeToLegacyAccountPath:(id)arg1 legacyOutboxPath:(id)arg2;
+ (id)localAccount;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)supportsAppleScript;
- (BOOL)hasTrashMailbox;
- (BOOL)isRemoteAccount;
- (BOOL)isZeroConfiguration;
- (BOOL)providesAccountInformation;
- (BOOL)canParticipateInRules;
- (BOOL)isEditableByUser;
- (id)_defaultSpecialMailboxRelativePathForType:(int)arg1;
- (BOOL)synchronizesDataWithServer;
- (id)URLPersistenceScheme;
- (id)rootlessMailboxForFileSystemPath:(id)arg1;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)renameMailbox:(id)arg1 newDisplayName:(id)arg2 parent:(id)arg3;
- (id)createMailboxWithParent:(id)arg1 displayName:(id)arg2 error:(id *)arg3;
- (id)createMailboxWithParent:(id)arg1 displayName:(id)arg2 localizedDisplayName:(id)arg3;
- (id)pathForMailboxWithParent:(id)arg1 displayName:(id)arg2;
- (BOOL)supportsNormalContainerOnlyMailboxes;
- (BOOL)_setChildren:(id)arg1 forMailbox:(id)arg2;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 pathComponent:(id)arg3 attributes:(unsigned long long)arg4 existingMailbox:(id)arg5 uuid:(id)arg6;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (BOOL)shouldMoveDeletedMessagesToTrash;
- (long long)emptyTrashFrequency;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)setIsWillingToGoOnline:(BOOL)arg1;
- (BOOL)isWillingToGoOnline;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)isOffline;
- (BOOL)isLocalAccount;
- (BOOL)shouldAutoFetch;
- (BOOL)canFetch;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUsername:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setConfigureDynamically:(BOOL)arg1;
- (BOOL)configureDynamically;
- (id)primaryMailbox;
- (id)mailboxPathExtension;
- (Class)storeClassForMailbox:(id)arg1;
- (id)_outboxMailboxCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) MFMailbox *outboxMailbox;
- (void)dealloc;

@end

