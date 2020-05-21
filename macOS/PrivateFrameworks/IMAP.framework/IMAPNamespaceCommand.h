//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSArray, NSString;
@protocol IMAPAccount;

@interface IMAPNamespaceCommand : IMAPSingleCommand
{
    id <IMAPAccount> _account;
    NSString *_separatorChar;
    NSArray *_privateNamespaces;
    NSArray *_publicNamespaces;
    NSArray *_sharedNamespaces;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sharedNamespaces; // @synthesize sharedNamespaces=_sharedNamespaces;
@property(copy, nonatomic) NSArray *publicNamespaces; // @synthesize publicNamespaces=_publicNamespaces;
@property(copy, nonatomic) NSArray *privateNamespaces; // @synthesize privateNamespaces=_privateNamespaces;
@property(copy, nonatomic) NSString *separatorChar; // @synthesize separatorChar=_separatorChar;
@property(retain, nonatomic) id <IMAPAccount> account; // @synthesize account=_account;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (BOOL)shouldSendAgainOnError;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithAccount:(id)arg1 separatorChar:(id)arg2;

@end

