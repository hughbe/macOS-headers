//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPDoneCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)activityString;
- (id)commandTypeString;

@end

