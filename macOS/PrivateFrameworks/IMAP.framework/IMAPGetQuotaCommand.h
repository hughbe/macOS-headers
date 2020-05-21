//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSString;

@interface IMAPGetQuotaCommand : IMAPSingleCommand
{
    NSString *_quotaRoot;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *quotaRoot; // @synthesize quotaRoot=_quotaRoot;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)shouldSendAgainOnError;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithQuotaRoot:(id)arg1;

@end

