//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalMessageAction.h>

#import <EmailCore/ECTransferUndownloadedMessageActionBuilder-Protocol.h>

@class NSArray, NSString, NSURL;

@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction <ECTransferUndownloadedMessageActionBuilder>
{
    long long _transferType;
    NSURL *_sourceMailboxURL;
    NSURL *_destinationMailboxURL;
    NSString *_oldestPersistedRemoteID;
    NSArray *_itemsToDelete;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *itemsToDelete; // @synthesize itemsToDelete=_itemsToDelete;
@property(copy, nonatomic) NSString *oldestPersistedRemoteID; // @synthesize oldestPersistedRemoteID=_oldestPersistedRemoteID;
@property(retain, nonatomic) NSURL *destinationMailboxURL; // @synthesize destinationMailboxURL=_destinationMailboxURL;
@property(retain, nonatomic) NSURL *sourceMailboxURL; // @synthesize sourceMailboxURL=_sourceMailboxURL;
@property(nonatomic) long long transferType; // @synthesize transferType=_transferType;
- (void)updateWithCompletedCopyItems:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSURL *mailboxURL;
@property(retain, nonatomic) NSString *messageActionPersistentID;
@property(readonly) Class superclass;
@property(nonatomic) BOOL userInitiated;

@end

