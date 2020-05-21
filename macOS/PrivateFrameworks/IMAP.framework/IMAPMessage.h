//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCRemoteMessage.h>

#import <IMAP/IMAPMessage-Protocol.h>

@class ECSubject, NSDate, NSString;
@protocol IMAPAccount, IMAPMessageDataSource;

@interface IMAPMessage : MCRemoteMessage <IMAPMessage>
{
    unsigned int _uid;
    long long _originalFlags;
}

+ (void)initialize;
@property(readonly, nonatomic) long long originalFlags; // @synthesize originalFlags=_originalFlags;
- (void)setDataSource:(id)arg1;
@property(readonly) id <IMAPMessageDataSource> dataSource;
@property(readonly, nonatomic) id <IMAPAccount> account;
- (id)remoteMailboxURLString;
- (id)remoteID;
@property(readonly, copy, nonatomic) NSString *mailboxName;
- (BOOL)isMessageContentLocallyAvailable;
@property unsigned int uid;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(readonly, copy) NSString *description;
- (id)initWithFlags:(long long)arg1 size:(unsigned long long)arg2 uid:(unsigned int)arg3;

// Remaining properties
@property(readonly) NSDate *dateReceived;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly) unsigned long long hash;
@property BOOL isPartial;
@property(readonly) unsigned long long messageSize;
@property BOOL partsHaveBeenCached;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly, copy) ECSubject *subject;
@property(readonly) Class superclass;

@end

