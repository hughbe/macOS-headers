//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDInteractionEventLog-Protocol.h>
#import <EmailDaemon/EDPBHasher-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class CNContactStore, EDInteractionEventLogSaltProvider, EFLazyCache, EFMutableInt64Set, NSData, NSFileHandle, NSString, NSURL;
@protocol EMUserProfileProvider, EMVIPManager, OS_dispatch_queue;

@interface EDPETInteractionEventLog : NSObject <EFLoggable, EDPBHasher, EDInteractionEventLog>
{
    _Atomic _Bool _shouldLog;
    _Atomic unsigned int _sequenceNumber;
    long long _userID;
    long long _deviceID;
    NSURL *_currentLogFile;
    id <EMUserProfileProvider> _profileProvider;
    EDInteractionEventLogSaltProvider *_saltProvider;
    CNContactStore *_contactStore;
    id <EMVIPManager> _vipManager;
    EFLazyCache *_contactIDCache;
    NSString *_meContactIdentifier;
    NSData *_rotatingSalt;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_directory;
    NSFileHandle *_logFileHandle;
    EFMutableInt64Set *_currentLogMessageIDs;
}

+ (void)enumerateFramesInData:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) EFMutableInt64Set *currentLogMessageIDs; // @synthesize currentLogMessageIDs=_currentLogMessageIDs;
@property(nonatomic) _Atomic _Bool shouldLog; // @synthesize shouldLog=_shouldLog;
@property(retain, nonatomic) NSFileHandle *logFileHandle; // @synthesize logFileHandle=_logFileHandle;
@property(readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
@property(nonatomic) _Atomic unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSData *rotatingSalt; // @synthesize rotatingSalt=_rotatingSalt;
@property(retain, nonatomic) NSString *meContactIdentifier; // @synthesize meContactIdentifier=_meContactIdentifier;
@property(readonly, nonatomic) EFLazyCache *contactIDCache; // @synthesize contactIDCache=_contactIDCache;
@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) EDInteractionEventLogSaltProvider *saltProvider; // @synthesize saltProvider=_saltProvider;
@property(readonly, nonatomic) id <EMUserProfileProvider> profileProvider; // @synthesize profileProvider=_profileProvider;
@property(retain, nonatomic) NSURL *currentLogFile; // @synthesize currentLogFile=_currentLogFile;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2;
- (void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4;
- (id)_messageDataEventForMessage:(id)arg1 account:(id)arg2;
- (id)hashedMessageHeadersForMessage:(id)arg1;
- (long long)hashedConversationID:(long long)arg1;
- (long long)hashedMailboxID:(id)arg1;
- (long long)hashedAccountID:(id)arg1;
- (CDStruct_5df41632)hashedSubject:(id)arg1;
- (long long)hashedContactIDForAddress:(id)arg1;
- (long long)hashedString:(id)arg1;
- (id)_currentLocaleIdentifier;
- (long long)_truncatedSHA256:(id)arg1;
- (id)_eventForName:(int)arg1 date:(id)arg2;
- (int)_timezoneOffset;
- (unsigned long long)_truncatedUNIXTimestampFromDate:(id)arg1;
- (int)_eventNameFromString:(id)arg1;
- (void)waitForPendingWrites;
- (BOOL)_isLogQuotaReached;
- (id)batchedEventsForSubmission;
- (void)_compressFramedMessagesIntoBatch:(id)arg1;
- (unsigned long long)_estimateStopCount:(id)arg1;
- (void)_writeQuotaReachedEvent;
- (void)_writeHeader;
- (void)_writeMessageDataIfNecessary:(id)arg1 account:(id)arg2;
- (void)_writeMessageDataIfNecessary:(id)arg1;
- (void)_writeEvent:(id)arg1;
- (id)_scanForMessageIDs:(id)arg1 logVersion:(out long long *)arg2;
- (id)_framedMessage:(id)arg1;
- (int)_openFileForAppending:(id)arg1;
- (id)_buildLogFileURLInDir:(id)arg1;
- (BOOL)_openCurrentLogfile;
- (void)_rotateLogWithCompressedData:(id)arg1;
- (void)_resetIdentifiers;
- (unsigned int)_persistentBits;
- (id)_salt;
@property(readonly, nonatomic) long long deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
- (id)initWithDirectory:(id)arg1 userProfileProvider:(id)arg2 saltProvider:(id)arg3 contactStore:(id)arg4 vipManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

