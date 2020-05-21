//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageTransferAction.h>

@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction
{
    NSArray *_mailboxObjectIDs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *mailboxObjectIDs; // @synthesize mailboxObjectIDs=_mailboxObjectIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 specialDestinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 destinationMailbox:(id)arg3 copyMessages:(BOOL)arg4;

@end

