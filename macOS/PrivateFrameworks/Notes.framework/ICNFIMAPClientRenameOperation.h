//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFIMAPClientMailboxOperation.h>

@class NSString;

@interface ICNFIMAPClientRenameOperation : ICNFIMAPClientMailboxOperation
{
    NSString *_nameForNewMailbox;
    NSString *_nameForNewMailboxArgument;
}

- (void).cxx_destruct;
@property(copy) NSString *nameForNewMailboxArgument; // @synthesize nameForNewMailboxArgument=_nameForNewMailboxArgument;
@property(copy) NSString *nameForNewMailbox; // @synthesize nameForNewMailbox=_nameForNewMailbox;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)debugCommandString;
- (id)detailsString;
- (id)activityString;
- (id)commandTypeString;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithMailboxName:(id)arg1 newMailboxName:(id)arg2;

@end

