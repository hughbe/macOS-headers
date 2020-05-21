//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@protocol IMAPAccount, IMAPGetNewLocalActionsOperationDelegate;

@interface IMAPGetNewLocalActionsOperation : IMAPPersistenceTaskOperation
{
    id <IMAPGetNewLocalActionsOperationDelegate> _delegate;
    long long _previousActionID;
    id <IMAPAccount> _account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IMAPAccount> account; // @synthesize account=_account;
@property(readonly, nonatomic) long long previousActionID; // @synthesize previousActionID=_previousActionID;
@property(nonatomic) __weak id <IMAPGetNewLocalActionsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)main;
- (id)initWithDataSource:(id)arg1;
- (id)initWithPreviousActionID:(long long)arg1 account:(id)arg2;

@end

