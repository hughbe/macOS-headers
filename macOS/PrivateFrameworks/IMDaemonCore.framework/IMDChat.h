//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/INSpeakable-Protocol.h>

@class IMDAccount, IMDService, IMDServiceSession, IMMessageItem, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject <INSpeakable>
{
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_engramID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSString *_lastAddressedSIMID;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    long long _state;
    unsigned long long _unreadCount;
    long long _rowID;
    long long _cloudKitSyncState;
    NSString *_originalGroupID;
    NSString *_serverChangeToken;
    long long _lastReadMessageTimeStamp;
    NSDate *_lastSentMessageDate;
    long long _lastMessageTimeStampOnLoad;
    unsigned char _style;
    BOOL _createEngramGroupOnMessageSend;
    BOOL _pendingENGroupParticipantUpdate;
    BOOL _isArchived;
    BOOL _isFiltered;
    BOOL _isBlackholed;
    BOOL _hasHadSuccessfulQuery;
    BOOL _wasReportedAsJunk;
    BOOL _meCardUpdated;
    NSString *_cloudKitRecordID;
    NSString *_srCloudKitRecordID;
    NSString *_lastSeenMessageGuid;
    NSString *_srServerChangeToken;
    long long _srCloudKitSyncState;
    NSDictionary *_nicknamesForParticipants;
    unsigned long long _numMessagesSent;
}

+ (id)_recordType;
@property BOOL meCardUpdated; // @synthesize meCardUpdated=_meCardUpdated;
@property unsigned long long numMessagesSent; // @synthesize numMessagesSent=_numMessagesSent;
@property BOOL wasReportedAsJunk; // @synthesize wasReportedAsJunk=_wasReportedAsJunk;
@property(readonly, nonatomic) NSDictionary *nicknamesForParticipants; // @synthesize nicknamesForParticipants=_nicknamesForParticipants;
@property BOOL pendingENGroupParticipantUpdate; // @synthesize pendingENGroupParticipantUpdate=_pendingENGroupParticipantUpdate;
@property BOOL createEngramGroupOnMessageSend; // @synthesize createEngramGroupOnMessageSend=_createEngramGroupOnMessageSend;
@property long long srCloudKitSyncState; // @synthesize srCloudKitSyncState=_srCloudKitSyncState;
@property(copy) NSString *srServerChangeToken; // @synthesize srServerChangeToken=_srServerChangeToken;
@property(readonly, copy) NSString *lastSeenMessageGuid; // @synthesize lastSeenMessageGuid=_lastSeenMessageGuid;
@property(copy) NSString *srCloudKitRecordID; // @synthesize srCloudKitRecordID=_srCloudKitRecordID;
@property(copy) NSString *cloudKitRecordID; // @synthesize cloudKitRecordID=_cloudKitRecordID;
- (void)meCardHasUpdated;
- (void)updateNicknamesForParticipants:(id)arg1;
- (void)tearDownToneNotificationSessionIfNeeded;
- (BOOL)isBusinessChat;
- (id)cloudKitDebugDescription;
- (id)_ckUniqueID;
- (id)cloudKitChatID;
@property(readonly, nonatomic) NSString *personCentricID;
- (id)_personIdentity;
- (void)_persistMergedIDMergedChatsIfNeeded:(id)arg1;
- (id)_chatRegistry;
- (void)updateHasHadSuccessfulQuery:(BOOL)arg1;
- (void)updateLastSeenMessageGuidIfNeeded:(id)arg1;
- (id)lastSeenMessageGUID;
- (int)messageHandshakeState;
- (int)smsHandshakeState;
- (BOOL)receivedBlackholeError;
- (int)getNumberOfTimesRespondedToThread;
- (BOOL)isSMSSpam;
- (BOOL)isiMessageSpam;
- (void)updateMessageHandshakeState:(int)arg1;
- (void)updateSMSHandshakeState:(int)arg1;
- (void)updateReceivedBlackholeError:(BOOL)arg1;
- (void)updateSMSSpamExtensionNameChatProperty:(id)arg1;
- (void)updateShouldForceToSMS:(BOOL)arg1;
- (void)updateIsSMSSpamChatProperty:(BOOL)arg1;
- (void)updateIsiMessageSpam:(BOOL)arg1;
- (void)updateNumberOfTimesRespondedToThread;
- (void)updateIsBlackholed:(BOOL)arg1;
- (void)updateIsFiltered:(BOOL)arg1;
- (void)updateDisplayName:(id)arg1;
- (void)updateLastAddressedSIMID:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)resetCKSyncState;
- (void)updateSrCloudKitRecordID:(id)arg1;
- (void)updateCloudKitRecordID:(id)arg1;
- (void)updateOriginalGroupID:(id)arg1;
- (void)updateSRCloudKitSyncState:(long long)arg1;
- (void)updateCloudKitSyncState:(long long)arg1;
- (void)updateSRServerChangeToken:(id)arg1;
- (void)updateServerChangeToken:(id)arg1;
- (void)updateLastReadMessageTimeStampIfNeeded:(long long)arg1;
- (void)updateEngroupCreationDate:(long long)arg1;
- (void)updateEngramID:(id)arg1;
- (void)updateGroupID:(id)arg1;
@property(readonly, nonatomic) BOOL isUnnamedChat;
- (id)generateNewGroupID;
- (void)storeAndBroadcastChatChanges;
- (void)updateProperties:(id)arg1;
- (void)_updateLastMessage:(id)arg1;
@property(readonly, retain) NSDictionary *dictionaryRepresentation;
- (id)copyDictionaryRepresentation:(BOOL)arg1;
- (id)dictionaryRepresentationIncludingLastMessage;
@property(readonly, retain) NSDictionary *chatProperties;
@property(readonly, copy) NSString *description;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (BOOL)isNewerThan:(id)arg1;
- (BOOL)isOlderThan:(id)arg1;
- (long long)engroupCreationDate;
@property(readonly, retain) IMDServiceSession *serviceSession;
@property(readonly, retain) IMDService *service;
@property(readonly, retain) IMDAccount *account;
@property(copy) NSString *accountID;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_updateCachedParticipants;
@property long long lastMessageTimeStampOnLoad;
- (void)setLastSentMessageDate:(id)arg1;
@property(readonly, retain) NSDate *lastSentMessageDate;
@property BOOL hasHadSuccessfulQuery;
@property BOOL isFiltered;
@property(setter=_setRowID:) long long rowID;
@property BOOL isBlackholed;
@property(readonly) BOOL isArchived;
@property(setter=_setUnreadCount:) unsigned long long unreadCount;
@property long long state;
@property unsigned char style;
@property(retain) IMMessageItem *lastMessage;
@property(retain) NSDictionary *properties;
@property(copy) NSString *lastAddressedSIMID;
@property(copy) NSString *lastAddressedLocalHandle;
@property(nonatomic) long long lastReadMessageTimeStamp;
- (void)setOriginalGroupID:(id)arg1;
@property(readonly, copy) NSString *originalGroupID;
@property long long cloudKitSyncState;
@property(copy, nonatomic) NSString *serverChangeToken;
@property(copy, setter=setEngramID:) NSString *engramID;
@property(copy, setter=setGroupID:) NSString *groupID;
@property(copy) NSString *displayName;
@property(copy) NSString *roomName;
@property(copy) NSArray *participants;
@property(copy) NSString *serviceName;
@property(copy) NSString *chatIdentifier;
@property(copy) NSString *guid;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 lastAddressedSIMID:(id)arg10 properties:(id)arg11 state:(long long)arg12 style:(unsigned char)arg13 isFiltered:(BOOL)arg14 hasHadSuccessfulQuery:(BOOL)arg15 engramID:(id)arg16 serverChangeToken:(id)arg17 cloudKitSyncState:(long long)arg18 originalGroupID:(id)arg19 lastReadMessageTimeStamp:(long long)arg20 lastMessageTimeStampOnLoad:(long long)arg21 srServerChangeToken:(id)arg22 srCloudKitSyncState:(long long)arg23 cloudKitRecordID:(id)arg24 srCloudKitRecordID:(id)arg25 isBlackholed:(BOOL)arg26;
- (BOOL)allowedByScreenTime;
@property(readonly) NSArray *alternativeSpeakableMatches;
@property(readonly) NSString *vocabularyIdentifier;
@property(readonly) NSString *pronunciationHint;
@property(readonly) NSString *spokenPhrase;
- (BOOL)applyChangesUsingCKRecord:(id)arg1 isUsingStingRay:(BOOL)arg2;
- (id)initWithCKRecord:(id)arg1 isUsingStingRay:(BOOL)arg2;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2 isUsingStingRay:(BOOL)arg3;
- (id)recordName;
- (id)_copyCKRecordFromExistingCKMetadataIsUsingStringRay:(BOOL)arg1 zoneID:(id)arg2 salt:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *identifier;
@property(readonly) Class superclass;

@end

