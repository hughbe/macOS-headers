//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCMessage.h>

#import <Mail/EDIndexableMessage-Protocol.h>
#import <Mail/EDLibraryMessage-Protocol.h>
#import <Mail/IMAPPersistedMessage-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, MFLibraryCalendarEvent, MFLibraryStore, MFMailAccount, MFMailbox, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;
@protocol ECMessageHeaders, ECMimePart, IMAPMessageDataSource;

@interface MFLibraryMessage : MCMessage <IMAPPersistedMessage, EDIndexableMessage, EDLibraryMessage>
{
    long long _libraryID;
    MFLibraryStore *_dataSource;
    NSString *_remoteID;
    unsigned int _uid;
    BOOL _hasSetCalendarEvent;
    BOOL _hasSetReferences;
    BOOL _isCompacted;
    BOOL _isBeingChanged;
    unsigned int _primitiveOptions;
    long long _conversationID;
    unsigned long long _messageSize;
    long long _mailboxID;
}

+ (id)messageWithPersistentID:(id)arg1;
+ (id)messageWithLibraryID:(long long)arg1;
+ (id)messageWithURL:(id)arg1;
+ (id)messagesWithURL:(id)arg1;
+ (id)messageIDFromMessageURL:(id)arg1;
+ (BOOL)isValidMessageID:(id)arg1;
+ (id)_residentMessageForLibraryID:(long long)arg1;
+ (void)_removeMessageFromResidentMessagesWithLibraryID:(long long)arg1;
+ (void)_removeMessagesFromResidentMessages:(id)arg1;
+ (id)_addMessageToResidentMessages:(id)arg1 overridingPreviousMessage:(BOOL)arg2;
+ (id)residentMessages;
+ (void)initialize;
- (void).cxx_destruct;
@property unsigned int primitiveOptions; // @synthesize primitiveOptions=_primitiveOptions;
@property BOOL isBeingChanged; // @synthesize isBeingChanged=_isBeingChanged;
@property BOOL isCompacted; // @synthesize isCompacted=_isCompacted;
@property long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property long long conversationID; // @synthesize conversationID=_conversationID;
- (id)searchableItemWithHTML:(id)arg1 messageBody:(id)arg2 updatableAttributesOnly:(BOOL)arg3;
- (void)appendMimeData:(id)arg1 partNumber:(id)arg2;
@property(readonly) BOOL shouldIndexAttachmentsForSpotlight;
@property(readonly, nonatomic) BOOL shouldSnipAttachmentData;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setAttachmentMetadata:(id)arg1;
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;
- (void)setRemoteID:(const char *)arg1 documentID:(id)arg2 flags:(long long)arg3 size:(unsigned long long)arg4 mailboxID:(long long)arg5 color:(CDStruct_f4b747e6)arg6 conversationID:(long long)arg7 conversationFlags:(unsigned long long)arg8;
@property(readonly, nonatomic) MFMailAccount *account;
- (id)path;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)reload;
- (BOOL)endChanging:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)beginChanging;
- (void)_commitLater;
- (void)commit;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;
@property CDStruct_f4b747e6 messageColor;
- (void)setColor:(id)arg1;
- (void)setColorHasBeenEvaluated:(BOOL)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setFlags:(long long)arg1;
- (void)setMessageFlags:(long long)arg1 mask:(long long)arg2;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property BOOL partsHaveBeenCached;
- (BOOL)isPartialMessageBodyAvailable;
- (BOOL)isMessageContentLocallyAvailable;
@property BOOL isPartial;
- (BOOL)loadOptionsSuffice:(unsigned int)arg1;
@property unsigned int options;
@property unsigned int uid;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(copy) NSString *remoteID;
- (void)_setRemoteID:(id)arg1;
- (void)_updateUID;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (id)primitiveDataSource;
- (void)setDataSource:(id)arg1;
@property(readonly) id <IMAPMessageDataSource> dataSource;
- (id)_unlockedMessageStore;
@property(readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property(readonly, copy) NSArray *cc;
@property(readonly, copy) NSArray *to;
- (id)sender;
- (id)subjectString;
@property(readonly, copy) ECSubject *subject;
@property(retain) MFLibraryCalendarEvent *calendarEvent;
- (void)setReferencesHashes:(id)arg1;
- (id)referencesHashes;
- (BOOL)type;
@property(readonly, copy) NSUUID *documentID;
@property(readonly, nonatomic) long long libraryID;
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, copy, nonatomic) NSString *messageID;
- (void)dealloc;
- (id)init;
- (id)initWithLibraryID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSArray *bcc;
@property(readonly, nonatomic) id <ECMimePart> bodyPart;
@property(readonly) NSDate *dateReceived;
@property(readonly) NSDate *dateSent;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) ECMessageFlags *flags;
@property(readonly, copy) NSArray *from;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) id <ECMessageHeaders> headers;
@property(readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property(readonly, nonatomic) BOOL isServerSearchResult;
@property(readonly) NSSet *labels;
@property(readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property(readonly, copy) NSArray *listUnsubscribe;
@property(readonly, copy, nonatomic) NSString *messageIDHeader;
@property(readonly) unsigned long long numberOfAttachments;
@property(readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property(readonly, copy, nonatomic) NSArray *references;
@property(readonly, copy) NSArray *senders;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly) Class superclass;

@end

